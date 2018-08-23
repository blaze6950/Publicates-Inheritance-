#pragma once 

class Date
{
protected:
	
public:
	size_t _day = 0;
	size_t _month = 0;
	size_t _year = 0;

	Date() = default;
	Date(int dd, int mm, int yy);
	~Date();

	void setDay(size_t day);
	void setMonth(size_t month);
	void setYear(size_t year);

	size_t getDay();
	size_t getMonth();
	size_t getYear();

	void print();
};

