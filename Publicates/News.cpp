#include "Header.h"

News::~News()
{

}

void News::addSource(string source)
{
	_source.push_back(source);
}
void News::setDate()
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
void News::removeSource()
{
	_source.pop_back();
}

void News::print()
{
	cout << "News : " << _header << endl << _content << endl << "Source : ";
	for (size_t i = 0; i < _source.size(); i++)
	{
		cout << _source[i].data() << "\t";
	}
	_date.print();
	cout << endl;
}