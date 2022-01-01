/** @file */
#pragma once
#include "Lista.h"

 /** Funkcja kodujaca znak(rekurencyjnie)
	@param  korzen korzen drzewa
	@param  s kod danego znaku 
	@param  c znak tekstu 
	@param  lista lista wierzcholkow(wezlow)
 */
void code(Wezel * korzen, string s, char c, Lista *lista);