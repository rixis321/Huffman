#include "odczytaj_argumenty.h"


params_result odczytaj_argumenty(int ile,  char** argumenty, string& wejscie, string& wyjscie, string& polecenie, string& slownik)
{
	const string etykieta_input("-i");
	const string etykieta_output("-o");
	const string etykieta_polecenie("-t");
	const string etykieta_slownik("-s");
	int wynik = 0;

	if (ile == 9)
	{
		for (int i = 0; i < ile; i++)
		{
			string arg = argumenty[i];
			if (arg == etykieta_input)
			{
				wejscie = argumenty[i + 1];
				wynik++;
			}
			if (arg == etykieta_output)
			{
				wyjscie = argumenty[i + 1];
				wynik++;
			}
			if (arg == etykieta_polecenie)
			{
				polecenie = argumenty[i + 1];
				if (polecenie == "d" or polecenie == "k")
				{
					wynik++;
				}
				else
				{
					wynik--;
				}
			}
			if (arg == etykieta_slownik)
			{
				slownik = argumenty[i + 1];
				wynik++;
			}
		}

		if (wynik == 4)
		{
			return params_result::params_ok;
		}
		else
		{
			return params_result::params_error;
		}
	}
	else
	{
		return params_result::params_help;
	}
		
	
	

}


