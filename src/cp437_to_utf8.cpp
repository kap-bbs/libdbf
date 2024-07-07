#include <string>
#include <sstream>
#include <map>
#include <locale>
#include <codecvt>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <boost/algorithm/string/replace.hpp>
#include <unistd.h>
#include <fstream>
#ifdef TEST
#include <check.h>
#endif
#include <boost/filesystem.hpp>

#include "common.h"

std::wstring decode_cp437(std::wstring wide) {
	if (!character_cache.size()) {
		setup_cache();
		make_maps();
	}

	static auto find_char = [&](wchar_t d) -> character {
		auto jt = cp437.find(d);
		if (jt == end(cp437))
			return make_tuple(d, end(persian_chars), (persian_character_index) -1);

		auto c = jt->second;
		auto it = character_cache.find(c);
		return it != end(character_cache) ? it->second : make_tuple(c, end(persian_chars), (persian_character_index) -1);
	};

	static std::set<std::pair<std::wstring, std::wstring>> replacements { { L"≥", L"æ≤" } };
	for (auto r : replacements)
		boost::replace_all(wide, r.first, r.second);

	std::wstring segment;

	auto leading_spaces = wide.find_first_not_of(L' ');
	if (leading_spaces == std::wstring::npos)
		leading_spaces = wide.length();

	wide = wide.substr(leading_spaces) + L' ';
	character previous, current = find_char(L' '), next = find_char(wide.front());

	bool prepend = false;
	int spaces = 0;

	for (auto jt = begin(wide), kt = jt + 1; kt != end(wide); jt = kt++) {
		previous = current;
		current = next;
		next = find_char(*kt);

		if (*jt != L' ') {
			prepend = cp437.find(*jt) != end(cp437);
			if (spaces) {
				segment = prepend ? (std::wstring(spaces, L' ') + segment) : (segment + std::wstring(spaces, L' '));
				spaces = 0;
			}

		} else {
			spaces++;
			continue;
		}

		if (prepend) {
			character_formatter f(next, current, previous);
			segment = f.get_unicode() + segment;

		} else
			segment += current.get();
	}

	return prepend ? (std::wstring(spaces, L' ') + segment) : (segment + std::wstring(spaces, L' '));
}

std::string decode_cp437(std::string src) {
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	return converter.to_bytes(decode_cp437(converter.from_bytes(src)));
}
