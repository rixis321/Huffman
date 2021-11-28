#include "Lista.h"
#include <string>
#include "fstream"
#include <iostream>
using namespace std;

Lista* wczytaj(string nazwa_pliku)
{
    ifstream plik(nazwa_pliku);
    string wyraz;
    Lista* lista1 = new Lista;

    if (plik)
    {
        while (plik >> wyraz)
        {
            lista1->push_back(wyraz);
        }
    }
    else
    {
        cout << "Plik nie istnieje " << endl;
    }
    return lista1;
}