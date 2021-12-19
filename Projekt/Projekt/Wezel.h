#pragma once
#include <string>
using namespace std;
struct Wezel
{
	Wezel* prawy; // prawy syn
	Wezel* lewy; // lewy syn
	Wezel* nastepny; // nastepny element w liscie
	char znak;
	int count; // ilosc wystapien danego znaku

	Wezel() // konstruktor
	{
		lewy = prawy = nastepny = nullptr;
		count = 0;
		
	}
	Wezel(int c, char d, Wezel* l, Wezel* p)
	{
		count = c;
		znak = d;
		lewy = l;
		prawy = p;
	}

	
	
};