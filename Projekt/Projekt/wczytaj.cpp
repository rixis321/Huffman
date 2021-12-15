#include "Lista.h"
#include <string>
#include "fstream"
#include <iostream>
#include <map>
using namespace std;

Lista* wczytaj(Lista* lista, string nazwa_pliku)
{
    ifstream plik(nazwa_pliku);
    string wyraz;

    map<char, int> counter;
    Lista* lista1 = new Lista;

    if (plik)
    {
        getline(plik, wyraz);
        lista->nazwy.push_back(wyraz);
        for (char c : wyraz)
        {

            if (counter.find(c) == counter.end())
            {
                counter[c] = 1;
            }
            else
            {
                counter[c]++;
            }
        }

        for (map<char, int>::iterator it = counter.begin(); it != counter.end(); it++)
        {
            Wezel* p = new Wezel;
            p->znak = it->first;
            p->count = it->second;
            lista->push_back(p);

        }
    }
    else
    {
        cout << "Plik nie istnieje " << endl;
    }
    return lista1;
}