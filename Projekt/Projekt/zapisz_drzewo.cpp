#include "zapisz_drzewo.h"
#include <iostream>
#include <fstream>

void zapisz_drzewo(Wezel* wezel, string b, string nazwa_pliku)
{
    fstream plik;
    plik.open(nazwa_pliku, ios_base::app);
    if (wezel == nullptr)
    {
        return;
    }


    if (wezel->znak != '$')
    {
       plik << wezel->znak << " " << b << endl;
       

    }
    zapisz_drzewo(wezel->lewy, b + "0",nazwa_pliku);
    zapisz_drzewo(wezel->prawy, b + "1",nazwa_pliku);
    plik.close();
    
}