#pragma once
#include <string>
using namespace std;
struct Wezel
{
	Wezel* prawy;
	Wezel* lewy;
	Wezel* nastepny;
	char znak;
	string slowo;
	int count;

	Wezel()
	{
		lewy = prawy = nastepny = nullptr;
		count = 0;
		slowo = "";
	}


};