/*
 * codecvt.h
 *
 *  Created on: Feb 2, 2020
 *      Author: ali
 */

#ifndef INCLUDE_CODECVT_H_
#define INCLUDE_CODECVT_H_

#include <string>

std::string encode_ebcdic(std::string src);
std::wstring encode_ebcdic(std::wstring src);
std::string decode_ebcdic(std::string src);
std::wstring decode_ebcdic(std::wstring src);
std::string decode_cp437(std::string src);
std::wstring decode_cp437(std::wstring src);
std::string encode_cp437(const std::string &src);
std::wstring encode_cp437(std::wstring src);

#endif /* INCLUDE_CODECVT_H_ */
