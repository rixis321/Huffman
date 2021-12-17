#include "code.h"
#include <iostream>
using namespace std;
void code(Wezel * korzen, string s, char c, Lista *p)
{

	if (korzen == nullptr)
	{
		return;
	}

	if (c == korzen->znak)
	{
		cout << s;
		p->zakodowany += s;
		
	}

	code(korzen->lewy, s + "0", c, p);
	code(korzen->prawy, s + "1", c, p);
}


	