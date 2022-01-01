#include "sprawdz_plik.h"
#include <fstream>
#include <string>
using namespace std;



bool sprawdz_plik(string nazwa_pliku)
{
	
	ofstream plik(nazwa_pliku);
		if (plik)
		{
			return true;
		}
		else
		{
			return false;
		}
				
}