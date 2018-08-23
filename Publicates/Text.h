#pragma once 
#include "Header.h"

class Text
{
protected:
	string _header;
	string _content;
public:
	Text() = default;
	Text(string header, string content);
	~Text();

	string getHeader();
	void setHeader(string header);
	string getContent();
	void setContent(string content);
	virtual void print();
};

