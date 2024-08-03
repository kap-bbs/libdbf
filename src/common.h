#ifndef _TEXT400_COMMON_H_
#define _TEXT400_COMMON_H_

#include <vector>
#include <set>

static std::map<wchar_t, wchar_t> ebcdic2persian { { L'å', L'ﺍ' }, { L'ç', L'ﺎ' }, { L'ï', L'ﺏ' }, { L'ì', L'ﺑ' }, { L'Ä', L'ﺕ' }, { L'À', L'ﺗ' }, { L'Á', L'ﺙ' }, { L'Ã', L'ﺛ' }, { L'Å', L'ﺝ' }, { L'Ç', L'ﺟ' }, { L'É', L'ﺡ' },
		{ L'Ê', L'ﺣ' }, { L'Ë', L'ﺥ' }, { L'È', L'ﺧ' }, { L'Í', L'ﺩ' }, { L'Î', L'ﺫ' }, { L'Ï', L'ﺭ' }, { L'Ì', L'ﺯ' }, { L'ð', L'ﺱ' }, { L'ý', L'ﺳ' }, { L'þ', L'ﺵ' }, { L'±', L'ﺷ' }, { L'°', L'ﺹ' }, { L'ª', L'ﺻ' }, { L'º', L'ﺽ' }, { L'æ',
				L'ﺿ' }, { L'¸', L'ﻁ' }, { L'Æ', L'ﻃ' }, { L'¤', L'ﻅ' }, { L'µ', L'ﻇ' }, { L'¡', L'ﻉ' }, { L'Ð', L'ﻋ' }, { L'Ý', L'ﻌ' }, { L'¿', L'ﻊ' }, { L'Þ', L'ﻍ' }, { L'^', L'ﻏ' }, { L'£', L'ﻐ' }, { L'®', L'ﻎ' }, { L'¥', L'ﻑ' }, { L'·',
				L'ﻓ' }, { L'©', L'ﻕ' }, { L'§', L'ﻗ' }, { L'¯', L'ﻝ' }, { L'¨', L'ﻟ' }, { L'´', L'ﻡ' }, { L'ô', L'ﻣ' }, { L'ö', L'ﻥ' }, { L'ò', L'ﻧ' }, { L'õ', L'ﻩ' }, { L'¹', L'ﻫ' }, { L'û', L'ﻬ' }, { L'ó', L'ﻭ' }, { L'ß', L'ﭖ' }, { L'Â',
				L'ﭘ' }, { L'Ñ', L'ﭺ' }, { L'ø', L'ﭼ' }, { L'Ø', L'ﮊ' }, { L'¶', L'ﮎ' }, { L'¼', L'ﮐ' }, { L'½', L'ﮒ' }, { L'¾', L'ﮔ' }, { L'ù', L'ﯼ' }, { L'ÿ', L'ﯾ' }, { L'ú', L'ﯽ' }, { L'á', L'ﺂ' }, { L'à', L'ﺁ' }, { L'é', L'ء' }, { L'î',
				L'ﺋ' }, { L'í', L'ﺅ' }, { L'ê', L'ﺃ' }, { L'ë', L'ﺄ' }, { L'÷', L'؟' }, { L'¢', L'﷼' }, { L'â', L'،' }, { L'²', L'ـ' }, { L'ü', L'ﮤ' }, { L'ñ', L'ﻻ' }, { L'ã', L'ﻵ' } };

static std::map<wchar_t, wchar_t> cp437 { { L'ì', L'ﺁ' }, { L'Ä', L'ﺋ' }, { L'É', L'ﺍ' }, { L'æ', L'ﺎ' }, { L'Æ', L'ﺏ' }, { L'ô', L'ﺑ' }, { L'ö', L'ﭖ' }, { L'ò', L'ﭘ' }, { L'û', L'ﺕ' }, { L'ù', L'ﺗ' }, { L'ÿ', L'ﺙ' }, { L'Ö', L'ﺛ' }, {
		L'Ü', L'ﺝ' }, { L'¢', L'ﺟ' }, { L'£', L'ﭺ' }, { L'¥', L'ﭼ' }, { L'₧', L'ﺡ' }, { L'ƒ', L'ﺣ' }, { L'á', L'ﺥ' }, { L'í', L'ﺧ' }, { L'ó', L'ﺩ' }, { L'ú', L'ﺫ' }, { L'ñ', L'ﺭ' }, { L'Ñ', L'ﺯ' }, { L'ª', L'ﮊ' }, { L'º', L'ﺱ' }, { L'¿',
		L'ﺳ' }, { L'⌐', L'ﺵ' }, { L'¬', L'ﺷ' }, { L'½', L'ﺹ' }, { L'¼', L'ﺻ' }, { L'¡', L'ﺽ' }, { L'«', L'ﺿ' }, { L'»', L'ط' }, { L'α', L'ظ' }, { L'ß', L'ﻉ' }, { L'Γ', L'ﻊ' }, { L'π', L'ﻌ' }, { L'Σ', L'ﻋ' }, { L'σ', L'ﻍ' }, { L'µ', L'ﻎ' },
		{ L'τ', L'ﻐ' }, { L'Φ', L'ﻏ' }, { L'Θ', L'ﻑ' }, { L'Ω', L'ﻓ' }, { L'δ', L'ﻕ' }, { L'∞', L'ﻗ' }, { L'φ', L'ﮎ' }, { L'ε', L'ﮐ' }, { L'∩', L'ﮒ' }, { L'≡', L'ﮔ' }, { L'±', L'ﻝ' }, { L'≥', L'ﻻ' }, { L'≤', L'ﻟ' }, { L'⌠', L'ﻡ' }, { L'⌡',
				L'ﻣ' }, { L'÷', L'ﻥ' }, { L'≈', L'ﻧ' }, { L'°', L'ﻭ' }, { L'∙', L'ﻩ' }, { L'·', L'ﻬ' }, { L'√', L'ﻫ' }, { L'ⁿ', L'ﯽ' }, { L'²', L'ﯼ' }, { L'■', L'ﯾ' }, { L'è', L'،' }, { L'Å', L'ء'}, 
    { L'Ç', L'0' },
    { L'ü', L'1' },
    { L'é', L'2' },
    { L'â', L'3' },
    { L'ä', L'4' },
    { L'à', L'5' },
    { L'å', L'6' },
    { L'ç', L'7' },
    { L'ê', L'8' },
    { L'ë', L'9' }
};

static std::map<wchar_t, wchar_t> persian2ebcdic, persian2cp437;

enum persian_character_index {
	UNDEFINED = -1, NORMAL = 0, INITIAL, MEDIAL, FINAL, ISOLATED
};

struct persian_charset: public std::vector<wchar_t> {
	persian_charset(const std::initializer_list<wchar_t> &set) :
			std::vector<wchar_t>(set) {
	}
	bool has_form(persian_character_index idx) const {
		return at(idx) != 0;
	}
	wchar_t form(persian_character_index idx) const {
		return at(idx);
	}
};

// alphabet shapes: normal form, initial form, medial form, final form, isolated form
static std::set<persian_charset> persian_chars { { L'ا', 0, 0, L'ﺎ', L'ﺍ' }, //
		{ L'آ', 0, 0, L'ﺂ', L'ﺁ' }, //
		{ L'أ', 0, 0, L'ﺄ', L'ﺃ' }, //
		{ L'إ', 0, 0, L'ﺈ', L'ﺇ' }, //
		{ L'ب', L'ﺑ', L'ﺒ', L'ﺐ', L'ﺏ' }, //
		{ L'پ', L'ﭘ', L'ﭙ', L'ﭗ', L'ﭖ' }, //
		{ L'ت', L'ﺗ', L'ﺘ', L'ﺖ', L'ﺕ' }, //
		{ L'ث', L'ﺛ', L'ﺜ', L'ﺚ', L'ﺙ' }, //
		{ L'ح', L'ﺣ', L'ﺤ', L'ﺢ', L'ﺡ' }, //
		{ L'خ', L'ﺧ', L'ﺨ', L'ﺦ', L'ﺥ' }, //
		{ L'ج', L'ﺟ', L'ﺠ', L'ﺞ', L'ﺝ' }, //
		{ L'چ', L'ﭼ', L'ﭽ', L'ﭻ', L'ﭺ' }, //
		{ L'د', 0, 0, L'ﺪ', L'ﺩ' }, //
		{ L'ذ', 0, 0, L'ﺬ', L'ﺫ' }, //
		{ L'ر', 0, 0, L'ﺮ', L'ﺭ' }, //
		{ L'ز', 0, 0, L'ﺰ', L'ﺯ' }, //
		{ L'ژ', 0, 0, L'ﮋ', L'ﮊ' }, //
		{ L'س', L'ﺳ', L'ﺴ', L'ﺲ', L'ﺱ' }, //
		{ L'ش', L'ﺷ', L'ﺸ', L'ﺶ', L'ﺵ' }, //
		{ L'ص', L'ﺻ', L'ﺼ', L'ﺺ', L'ﺹ' }, //
		{ L'ض', L'ﺿ', L'ﻀ', L'ﺾ', L'ﺽ' }, //
		{ L'ط', L'ﻃ', L'ﻄ', L'ﻂ', L'ﻁ' }, //
		{ L'ظ', L'ﻇ', L'ﻈ', L'ﻆ', L'ﻅ' }, //
		{ L'ع', L'ﻋ', L'ﻌ', L'ﻊ', L'ﻉ' }, //
		{ L'غ', L'ﻏ', L'ﻐ', L'ﻎ', L'ﻍ' }, //
		{ L'ف', L'ﻓ', L'ﻔ', L'ﻒ', L'ﻑ' }, //
		{ L'ق', L'ﻗ', L'ﻘ', L'ﻖ', L'ﻕ' }, //
		{ L'ک', L'ﮐ', L'ﮑ', L'ﮏ', L'ﮎ' }, //
		{ L'گ', L'ﮔ', L'ﮕ', L'ﮓ', L'ﮒ' }, //
		{ L'ل', L'ﻟ', L'ﻠ', L'ﻞ', L'ﻝ' }, //
		{ L'م', L'ﻣ', L'ﻤ', L'ﻢ', L'ﻡ' }, //
		{ L'ن', L'ﻧ', L'ﻨ', L'ﻦ', L'ﻥ' }, //
		{ L'و', 0, 0, L'ﻮ', L'ﻭ' }, //
		{ L'ه', L'ﻫ', L'ﻬ', L'ﻪ', L'ﻩ' }, //
		{ L'ی', L'ﯾ', L'ﯿ', L'ﯽ', L'ﯼ' }, //
		{ L'ئ', L'ﺋ', L'ﺌ', L'ﺊ', L'ﺉ' }, //
		{ L'ؤ', 0, 0, L'ﺆ', L'ﺅ' }, //
		{ L'ۀ', 0, 0, L'ﮥ', L'ﮤ' }, //
		{ L'ة', 0, 0, L'ﺔ', L'ﺓ' }, //
		{ 0, 0, 0, L'ﻼ', L'ﻻ' }, //
		{ 0, 0, 0, L'ﻶ', L'ﻵ' }, //
		{ 0, 0, 0, L'ﻸ', L'ﻸ' }, //
		{ 0, 0, 0, L'ﻺ', L'ﻹ' }, //
		{ 0, 0, 0, 0, L'ء'}, //
		{ 0, 0, 0, 0, L'،'}, //
		{ 0, 0, 0, 0, L'ـ'}, //
		{ 0, 0, 0, 0, L'؟'}, //
		{ 0, 0, 0, 0, L'﷼'}, //
};

using persian_charset_ptr = decltype(persian_chars)::iterator;

static void make_maps() {
	for (auto it = ebcdic2persian.begin(); it != ebcdic2persian.end(); ++it)
		persian2ebcdic[it->second] = it->first;
	for (auto it = cp437.begin(); it != cp437.end(); ++it)
		persian2cp437[it->second] = it->first;
}

struct character: public std::tuple<wchar_t, persian_charset_ptr, persian_character_index> {
	character() {
	}
	character(const std::tuple<wchar_t, persian_charset_ptr, persian_character_index> &rhs) {
		operator=(rhs);
	}
	character operator=(const std::tuple<wchar_t, persian_charset_ptr, persian_character_index> &rhs) {
		std::get<0>(*this) = std::get<0>(rhs);
		std::get<1>(*this) = std::get<1>(rhs);
		std::get<2>(*this) = std::get<2>(rhs);
		return *this;
	}
	persian_character_index form() const {
		return std::get<2>(*this);
	}
	wchar_t form(persian_character_index idx) const {
		return std::get<1>(*this)->form(idx);
	}
	bool is_persian() const {
		return std::get<2>(*this) != persian_character_index::UNDEFINED;
	}
	bool has_form(persian_character_index idx) const {
		return std::get<1>(*this)->has_form(idx);
	}
	wchar_t get() const {
		return std::get<0>(*this);
	}
};

static std::map<wchar_t, character> character_cache;
static void setup_cache() {
	for (auto it = begin(persian_chars); it != end(persian_chars); it++)
		for (int i = 0; i < 5; i++)
			character_cache[(*it)[i]] = make_tuple((*it)[i], it, (persian_character_index) i);
	character_cache.erase(0);
}

class character_formatter {
	character &previous, &current, &next;

public:
	character_formatter(character &previous_, character &current_, character &next_) :
			previous(previous_), current(current_), next(next_) {
	}

	std::wstring get_unicode() {
		static const wchar_t ZWJ = 0x200D, ZWNJ = 0x200C;

		std::wstringstream ss;
		ss << form(NORMAL);

		if (make_joiner())
			ss << ZWJ;
		else if (make_non_joiner())
			ss << ZWNJ;

		return ss.str();
	}

	wchar_t get_ebcdic() {
		if (is_medial_or_final())
			return is_initial_or_medial() ? character_form(persian2ebcdic, MEDIAL) : character_form(persian2ebcdic, FINAL);
		else
			return is_initial_or_medial() ? character_form(persian2ebcdic, INITIAL) : character_form(persian2ebcdic, ISOLATED);
	}

	wchar_t get_cp437() {
		if (is_medial_or_final())
			return is_initial_or_medial() ? character_form(persian2cp437, MEDIAL) : character_form(persian2cp437, FINAL);
		else
			return is_initial_or_medial() ? character_form(persian2cp437, INITIAL) : character_form(persian2cp437, ISOLATED);
	}

	bool is_printable() {
		return ZWJ.find(std::get<0>(current)) == end(ZWJ) && ZWNJ.find(std::get<0>(current)) == end(ZWNJ);
	}

	bool persian;

private:
	wchar_t form(persian_character_index idx) {
		if (!(persian = current.is_persian()))
			return current.get();

		auto c = current.form(idx);
		if (c)
			return c;

		return current.get();
	}

	bool make_joiner() {
		if (!current.is_persian())
			return false;

		if (current.form() != INITIAL && current.form() != MEDIAL)
			return false;

		if (!next.is_persian())
			return true;

		if (!next.has_form(MEDIAL) && !next.has_form(FINAL))
			return true;

		return false;
	}

	bool make_non_joiner() {
		if (!current.is_persian())
			return false;

		if (current.form() != FINAL && current.form() != ISOLATED)
			return false;

		if (!current.has_form(INITIAL) && !current.has_form(MEDIAL))
			return false;

		if (!next.is_persian())
			return false;

		if (next.has_form(MEDIAL) || next.has_form(FINAL))
			return true;

		return false;
	}

	const std::set<wchar_t> ZWJ { 0x200D, L'ـ' }, ZWNJ { 0x200C };

	wchar_t character_form(const std::map<wchar_t, wchar_t> &persian2xxx, persian_character_index idx) {
		auto current = std::get<1>(this->current);

		if (std::get<2>(this->current) != persian_character_index::UNDEFINED) {
			auto r = persian2xxx.find(current->at(idx));
			if (r == persian2xxx.end() && idx == MEDIAL)
				r = persian2xxx.find(current->at(INITIAL));
			if (r == persian2xxx.end() && idx == MEDIAL)
				r = persian2xxx.find(current->at(FINAL));
			if (r == persian2xxx.end())
				r = persian2xxx.find(current->at(ISOLATED));
			if (r == persian2xxx.end())
				r = persian2xxx.find(current->at(INITIAL));

			return r == persian2xxx.end() ? std::get<0>(this->current) : r->second;

		} else {
			auto it = persian2xxx.find(std::get<0>(this->current));
			return it != end(persian2xxx) ? it->second : std::get<0>(this->current);
		}
	}

	bool is_initial_or_medial() {
		return ZWNJ.find(std::get<0>(next)) == end(ZWNJ) && (ZWJ.find(std::get<0>(next)) != end(ZWJ) || (std::get<2>(next) != persian_character_index::UNDEFINED && (std::get<1>(next)->at(MEDIAL) || std::get<1>(next)->at(FINAL))));
	}

	bool is_medial_or_final() {
		return std::get<2>(previous) != persian_character_index::UNDEFINED && (std::get<1>(previous)->at(INITIAL) || std::get<1>(previous)->at(MEDIAL));
	}
};

#endif // _TEXT400_COMMON_H_
