#include "Header.h"

Ads::~Ads()
{

}

void Ads::setDate()
{
	int dd = 0, mm = 0, yy = 0;
	cout << "Enter the day : ";
	cin >> dd;
	_date.setDay(dd);
	cout << "Enter the month : ";
	cin >> mm;
	_date.setMonth(mm);
	cout << "Enter the year : ";
	cin >> yy;
	_date.setYear(yy);
}
void Ads::setFinalDate()
{
	int dd = 0, mm = 0, yy = 0;
	cout << "Enter the day : ";
	cin >> dd;
	_finalDate.setDay(dd);
	cout << "Enter the month : ";
	cin >> mm;
	_finalDate.setMonth(mm);
	cout << "Enter the year : ";
	cin >> yy;
	_finalDate.setYear(yy);
}

void Ads::print()
{
	cout << "Ads : " << _header << endl << _content << endl;
	_date.print();
	_finalDate.print();
	cout << endl;
}
