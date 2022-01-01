/** @file */
#pragma once
#include <iostream>
using namespace std;

/** Typ reprezentuj¹cy wynik spawdzenia parametrów wywo³ania programu. */
enum params_result
{
	params_ok,   ///< poprawne wywo³anie programu
	params_help, ///< wywo³anie pomocy
	params_error ///< niepoprawne parametry wywo³ania programu
	

};

/** Funkcja odczytujaca parametry wywolania programu.
	@param  ile liczba parametrow przy uruchomieniu programu
	@param  argumenty wartosci parametrow wprowadzonych przez uzytkownika
	@param  wejscie parametr wyjsciowy, do ktorego zostanie zapisana odczytana nazwa pliku wejsciowego
	@param  parameter wyjsciowy, do ktorego zostanie zapisana odczytana nazwa pliku wyjsciowego
	@param  polecenie parametr wyjsciowy do ktorego zostanie zapisana wartosc parametru -t
	@param  slownik parameter wyjsciowy, do ktorego zostanie zapisana odczytana nazwa pliku ze slownikiem
	@return  typ wyliczeniowy params_result

*/
params_result odczytaj_argumenty(int ile,  char** argumenty, string& wejscie, string& wyjscie, string& polecenie, string& slownik);
