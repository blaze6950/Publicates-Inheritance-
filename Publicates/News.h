#pragma once 

#include"Header.h"
class News : virtual public Text
{
protected:
	Date _date;
	vector<string> _source;
	
public:
	News() = default;
	~News();

	void addSource(string source);
	void setDate();
	void removeSource();

	void print();
};

