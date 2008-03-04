// $Id: FactorCollection.cpp 1218 2007-02-16 18:08:37Z hieuhoang1972 $

/***********************************************************************
Moses - factored phrase-based language decoder
Copyright (C) 2006 University of Edinburgh

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
***********************************************************************/

#pragma once

#include <string>
#include <vector>
#include <set>

class Tokenizer
{
protected:
	std::string m_language;
	static bool m_initialized;
	static std::set<std::string> m_prefixes;
	static std::set<std::string> m_punctuation;
	static std::set<std::string> m_quotes;
public:

	Tokenizer(const std::string &language);

	std::string Tokenize(const std::string &input);
	void SentenceSeparator(std::vector<std::string> &newTokens, const std::string &token);
	void QuotesFirst(std::vector<std::string> &newTokens, const std::string &token);
	void QuotesLast(std::vector<std::string> &newTokens, const std::string &token);
};

