#pragma once
#include "Date.h"
#include <iostream>
Date::Date(int dd, int mm, int yy)
{
	_day = dd;
	_month = mm;
	_year = yy;
}

Date::~Date()
{

}

void Date::setDay(size_t day)
{
	if (day > 0 && day < 31){
		_day = day;
	}
}
void Date::setMonth(size_t month)
{
	if (month > 0 && month < 13){
		_month = month;
	}
}
void Date::setYear(size_t year)
{
	if (year > 0){
		_year = year;
	}
}

size_t Date::getDay()
{
	return _day;
}
size_t Date::getMonth()
{
	return _month;
}
size_t Date::getYear()
{
	return _year;
}

void Date::print()
{
	std::cout << "Date(dd/mm/yy) : " << _day << "/" << _month << "/" << _year << std::endl;
}