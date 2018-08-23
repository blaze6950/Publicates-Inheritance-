#pragma once
#include "Header.h"
class Collection 
{
	vector<Text*> information;
public:
	Collection();
	~Collection();
	void addInfo(Text* inf)
	{
		information.push_back(inf);
	}
	void print()
	{
		for (size_t i = 0; i < information.size(); i++)
		{
			information[i]->print();
			cout << endl;
		}
	}
};

