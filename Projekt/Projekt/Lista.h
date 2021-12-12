#pragma once
#include "Wezel.h"
// lista Wezlow
struct Lista
{

    Wezel* pierwszy; // pierwszy element listy
    int size; // zmienna przechowuje dlugosc listy

    
    void push_back(string element);  //funkcja uzywana przy wczytywaniu danych z pliku,

    void push_back(Wezel *element); // funkcja sluzaca do dodawania kolejnych wezlow do listy 

    int getSize(); // funkcja zwracajaca rozmiar listy

    void showLista(); // funkcja pokazuje wszystkie elementy w liscie, sluzy do testowania czy sortowanie dziala itp 

    void zlicz(Lista *lista); // funkcja zliczajaca wystapienia danej litery

    void sortuj(); // funkcja sluzaca do sortowania listy od najmniejszych elementow do najwiekszych (zaimplementowane sortowanie przez wybieranie)

    void makeTree(Lista *lista); // funkcja sluzaca do stworzenia drzewa z listy 

    void printTree(Wezel *wezel, string b); // funkcja sluzaca do wyswietlenia drzewa (tablica kodowania)
   
    Lista() // konstruktor
    {
        pierwszy = nullptr;
        size = 0;
        
    }
   

};