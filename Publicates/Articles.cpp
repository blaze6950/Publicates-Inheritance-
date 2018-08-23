#include "Header.h"

Articles::~Articles()
{

}

void Articles::addAuthor(string author)
{
	_author.push_back(author);
}
void Articles::removeAuthor()
{
	_author.pop_back();
}

void Articles::print()
{
	cout << "Articles : " << _header << endl << _content << endl << "Authors : ";
	for (size_t i = 0; i < _author.size(); i++)
	{
		cout << _author[i].data() << "\t";
	}
	cout << endl;
}
