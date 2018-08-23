#pragma once 
#include "Header.h"
class Ads : virtual public Text
{
protected:
	Date _date;
	Date _finalDate;
public:
	Ads() = default;;
	~Ads();

	void setDate();
	void setFinalDate();

	void print();
};

