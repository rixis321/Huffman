/** @file */
#pragma once
#include <iostream>
#include "codeHuffman.h"
using namespace std;



/** Funkcja zapisujaca teskst po dekodowaniu do pliku wyjsciowego
	@param  nazwa_p nazwa pliku wyjsciowego
	@param  coded zakodowany tekst 
*/
void zapisz(string nazwa_p, string coded);



/** Funkcja zapisujaca zakodowany tekst do pliku wyjsciowego
	@param  nazwa_p nazwa pliku wyjsciowego
	@param  lista lista wezlow
*/
void zapisz(string nazwa_p, Lista* lista);

