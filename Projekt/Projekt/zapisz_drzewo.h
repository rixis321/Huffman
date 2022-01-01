/** @file */
#pragma once
#include "Wezel.h"
#include <iostream>

/** Funkcja zapisujaca drzewo(slownik) do pliku wyjsciowego(rekurencyjnie)
	@param  wezel korzen drzewa 
	@param  b kod danego znaku tworzony w czasie wywolywania(na poczatku jest pusty)
	@param  nazwa_pliku nazwa pliku wyjsciowego
*/
void zapisz_drzewo(Wezel* wezel, string b, string nazwa_pliku);