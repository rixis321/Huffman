// Projekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Lista.h"
#include "wczytaj.h"
#include "codeHuffman.h"
#include "decode.h"
#include "zapisz.h"
#include "odczytaj_argumenty.h"
#include "zapisz_drzewo.h"
#include "zapisz_pomocniczy.h"
#include "sprawdz_plik.h"


using namespace std;

int main(int argc, char* argv[])
{
    string wejscie;
    string wyjscie;
    string dzialanie;
    string slownik;
    params_result flaga = odczytaj_argumenty(argc, argv, wejscie, wyjscie, dzialanie, slownik);
    if (flaga == params_help )
    {
        cout << "W celu uruchomienia programu skorzystaj z dostepnych przelacznikow " << endl;
        cout << "-i plik wejsciowy" << endl;
        cout << "-o plik wyjsciowy" << endl;
        cout << "-t tryb: k-kompresja, d-dekompresja" << endl;
        cout << "-s plik ze slownikiem" << endl;
    }
    else if (flaga == params_error)
    {
        cout << "Blad podczas wprowadzenia parametrow. Sprobuj ponownie " << endl;
    }
    else
    {
        Lista* lista = new Lista;
        string plik("pomocniczy.txt");

        if (dzialanie == "k")
        {
            wczytaj(lista, wejscie);
            if (sprawdz_plik(wejscie) == true)
            {
                lista->sortuj();
                lista->pierwszy = lista->makeTree(lista);
                codeHuffman(lista);
                zapisz_pomocniczy(plik, lista);
                zapisz(wyjscie, lista);
                zapisz_drzewo(lista->pierwszy, "", slownik);

                cout << "Dane zostaly zapisane poprawnie w pliku " << endl;
            }
            else
            {
                cout << "Nie udalo sie utworzyc pliku." << endl;
            }
           
        }
        if (dzialanie == "d")
        {
            wczytaj(lista, plik);
            lista->sortuj();
            lista->pierwszy = lista->makeTree(lista);
            codeHuffman(lista);
            string decoded = decode(lista->pierwszy, lista->zakodowany);
            zapisz(wyjscie, decoded);
            cout << "Dane zostaly zapisane poprawnie w pliku " << endl;
        }  

    }
   
    return 0;
     
}

