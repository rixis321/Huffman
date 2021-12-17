﻿// Projekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Lista.h"
#include "wczytaj.h"
#include "codeHuffman.h"
#include "decode.h"

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


    Lista* lista = new Lista;
    string plik;
    cout << "podaj nazwe pliku :" << endl;
    cin >> plik;
    wczytaj(lista,plik);
    lista->showLista();
    cout << "---------------------------------------------" << endl;
    lista->sortuj();
    lista->showLista();
    cout << lista->getSize() << endl;
    cout << "---------------------------------------------" << endl;
   // cout << lista->pierwszy->znak << endl;
    lista->makeTree(lista);
    cout << lista->getSize() << endl;
    //lista->printTree(lista, " ");

    cout << "Tablica kodowania: " << endl;
    lista->printTree(lista->pierwszy,"");

   
    cout << "---------------------------------------------" << endl;
    cout << "Tekst oryginalny" << endl;
    for (int i = 0; i < lista->nazwy.size(); i++)
    {
        cout << lista->nazwy[i] << endl;
    }
    string name;
    cout << "Tekst po zakodowaniu: " << endl;
    codeHuffman(lista);
    cout << endl;
    cout << endl;
   // string p = decode(lista->pierwszy, lista->zakodowany);
   // lista->printTree(lista->pierwszy, " ");


    /*cout << lista->pierwszy->znak << endl;
    cout << lista->pierwszy->count << endl;

    cout << lista->pierwszy->lewy->znak << endl;
    cout << lista->pierwszy->lewy->count << endl;

    cout << lista->pierwszy->lewy->lewy->znak << endl;
    cout << lista->pierwszy->lewy->lewy->count << endl;

    cout << lista->pierwszy->lewy->prawy->znak << endl;
    cout << lista->pierwszy->lewy->prawy->count << endl;
   
    cout << lista->pierwszy->prawy->znak << endl;
    cout << lista->pierwszy->prawy->count << endl;
    cout << lista->pierwszy->prawy->lewy->znak << endl;
    cout << lista->pierwszy->prawy->lewy->count << endl;
    cout << lista->pierwszy->prawy->prawy->znak << endl;
    cout << lista->pierwszy->prawy->prawy->count << endl;*/



  //  cout << lista->pierwszy->prawy->prawy->lewy->znak << endl;
   // cout << lista->pierwszy->prawy->prawy->lewy->count << endl;
  //  cout << lista->pierwszy->prawy->prawy->prawy->znak << endl;
//    cout << lista->pierwszy->prawy->prawy->prawy->count << endl;
    /*cout << lista->pierwszy->count << "," << lista->pierwszy->nastepny->count << endl;
    cout << lista->pierwszy->znak << "," << lista->pierwszy->nastepny->znak << endl;*/
    return 0;
   

  
  
}

