/** @file */
#pragma once
#include <iostream>
using namespace std;

/** Typ reprezentuj�cy wynik spawdzenia parametr�w wywo�ania programu. */
enum params_result
{
	params_ok,   ///< poprawne wywo�anie programu
	params_help, ///< wywo�anie pomocy
	params_error ///< niepoprawne parametry wywo�ania programu
	

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
