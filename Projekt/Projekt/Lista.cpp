#include "Wezel.h"
#include <string>

using namespace std;

void createList(Wezel* korzen, string s)
{
	Wezel* a;
	korzen = nullptr;

	for (int i = 0; i < s.size(); i++)
	{
		a = korzen;
		while (a->znak = s[i])
		{
			a = a->nastepny;
		}
		if (!a)
		{
			a = new Wezel;
			a->nastepny = korzen;
			a->znak = s[i];
			korzen = a;
		}
		a->count++;
	}

}