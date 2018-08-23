#include "Collection.h"

void main()
{
	Collection c1;
	auto s = new Ads;
	s->setHeader("Velosiped");
	s->setContent("Fitbike trl3 2013");
	s->setDate();
	s->setFinalDate();
	c1.addInfo(s);
	c1.print();
}