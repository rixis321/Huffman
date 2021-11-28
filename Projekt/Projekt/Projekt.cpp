// Projekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Lista.h"
#include "wczytaj.h"

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {
        auto s = string(argv[i]);
        if (argc > 1)
        {
            if (s == "-i")
            {
                cout << "plik wejsciowy" << endl;
            }
            else if (s == "-o")
            {
                cout << "plik wyjsciowy" << endl;
            }
            else if (s == "-t")
            {
                string s1;
                cin >> s1;
                if (s1 == "k")
                {
                    cout << "kompresja" << endl;
                }
                else if (s1 == "d")
                {
                    cout << "dekompresja" << endl;
                }
            }
            else if (s == "s")
            {
                cout << "slownik" << endl;
            }
        }
        else
        {
            cout << "-i plik wejsciowy" << endl;
            cout << "-o plik wejsciowy" << endl;
            cout << "-t tryb: k-kompresja, d-dekompresja" << endl;
            cout << "-s plik ze slownikiem" << endl;
        }
    }


    //-----------------------------------------DO SPRAWDZANIA MAPY-------------------------------------------
  /*  string name = "konorraad";
    string plik;
    cout <<  "podaj nazwe pliku:" << endl;
    cin >> plik;*/
    /*map<char, int> mapa = wczytaj(plik);
    createList(mapa);
    for (map<char, int>::iterator it = mapa.begin(); it != mapa.end(); ++it)
    {
        cout << it->first << "----" << it->second << "-----" << endl;
    }*/
  
    Lista* lista = new Lista;
    string plik;
    cout << "Podaj nazwe pliku :" << endl;
    cin >> plik;
    lista = wczytaj(plik);
    lista->showLista();
   
   
   

  
  
}

