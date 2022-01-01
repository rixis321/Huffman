/** @file */
#pragma once
#include <string>
using namespace std;

/** Wezel drzewa poszukiwañ binarnych. */
struct Wezel
{
	Wezel* prawy; ///< adres prawego syna
	Wezel* lewy;  ///< adres lewego syna
	Wezel* nastepny; ///< adres nastepnego wezla
	char znak; ///< znak przechowywany w wezle
	int count; //< ilosc wystapien danego znaku


	/** Konstruktor domyslny wezla */
	Wezel() 
	{
		lewy = prawy = nastepny = nullptr;
		count = 0;
		
	}

	/** Konstruktor 4-argumentowy wezla */
	Wezel(int c, char d, Wezel* l, Wezel* p)
	{
		count = c;
		znak = d;
		lewy = l;
		prawy = p;
	}

	
	
};