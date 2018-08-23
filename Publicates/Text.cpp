#include "Header.h"

Text::Text(string header, string content)
{
	_header = header;
	_content = content;
}


Text::~Text()
{
}


string Text::getHeader()
{
	return _header;
}
void Text::setHeader(string header)
{
	_header = header;
}
string Text::getContent()
{
	return _content;
}
void Text::setContent(string content)
{
	_content = content;
}
void Text::print()
{
	cout << "Header : " << _header << endl << "Content : \n" << _content << endl;
}