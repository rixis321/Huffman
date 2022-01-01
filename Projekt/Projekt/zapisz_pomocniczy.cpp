#include "zapisz_pomocniczy.h"
#include <fstream>

	void zapisz_pomocniczy(string nazwa_p, Lista * lista)
	{
		ofstream plik(nazwa_p);
		for (int i = 0; i < lista->nazwy.size(); i++)
		{
			plik << lista->nazwy[i];
		}
	}