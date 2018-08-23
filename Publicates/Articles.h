#pragma once 
#include "Header.h"

class Articles : virtual public Text
{
protected:
	vector<string> _author;
public:
	Articles() = default;
	~Articles();

	void addAuthor(string author);
	void removeAuthor();

	void print();
};

