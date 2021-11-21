#include "Wezel.h"
#include <fstream>
#include "Lista.h"
#include <iostream>
#include <map>
using namespace std;

map<char,int>wczytaj(string nazwa_pliku)
{
	ifstream plik(nazwa_pliku);
	string wyraz;
	map<char,int> kontener;
	if (plik)
	{
		while (plik >> wyraz)
		{
			for (char a : wyraz)
			{
				if (kontener.find(a) == kontener.end())
				{
					kontener[a] = 1;
				}
				else
					kontener[a]++;
			}
		}
		cout << "Dane zostaly wprowadzone prawidlowo" << endl;
		plik.close();
	}
	else
	{
		cout << "Podany plik nie istnieje." << endl;
	}

	return kontener;
		
		

	

}
	
