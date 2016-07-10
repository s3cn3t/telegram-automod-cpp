#include "Parser.h"

Parser::Parser(const std::string& message)
	: m_message(message)
{
	
}

Parser::~Parser()
{

}

std::string Parser::getFinalString()
{
	std::string result;

	for (const auto& s : KEYWORD_LIST)
	{
		if (m_message.find(s.first) != -1
			&& m_message.find(s.second) == -1)
		{
			return s.second;
		}
	}

	return result;
}

void Parser::parse()
{

}
