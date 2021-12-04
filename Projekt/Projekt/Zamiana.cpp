#include "Zamiana.h"

Wezel* zamiana(Wezel* p, Wezel* p2)
{
	Wezel* tmp = p2->nastepny;
	p2->nastepny = p;
	p->nastepny = tmp;
	return p2;
}