#include "zapisz.h"
#include <iostream>
#include <fstream>
using namespace std;
void zapisz(string nazwa_p, string coded)
{

	ofstream plik(nazwa_p);
	plik << coded;
}

void zapisz(string nazwa_p, Lista* lista)
{
	ofstream plik(nazwa_p);
	plik << lista->zakodowany;
}

