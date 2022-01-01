/** @file */
#pragma once 
#include "Lista.h"
using namespace std;

/** Funkcja wczytujaca dane wejsciowe z pliku
	@param  lista lista do ktorej wczytywane sa dane
	@param  plik nazwa pliku wejsciowego
	@return  adres listy z danymi 
*/
Lista* wczytaj(Lista* lista, string plik);