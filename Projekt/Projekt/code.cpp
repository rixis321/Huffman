#include "code.h"
#include <iostream>
using namespace std;
void code(Wezel* korzen, string s, char c)
{

	if (korzen == nullptr)
	{
		return;
	}
	
	if (c == korzen->znak)
	{
		cout << s;
	}

	code(korzen->lewy, s + "0", c);
	code(korzen->prawy, s + "1", c);
}
	