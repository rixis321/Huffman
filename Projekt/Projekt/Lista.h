/** @file */
#pragma once
#include "Wezel.h"
#include <vector>

/** Lista wezlow drzewa */
struct Lista
{
    Wezel* pierwszy; ///< adres pierwszego elementu listy
    int size; ///< rozmiar listy
    vector<string> nazwy; ///< vector zawierajacy dane pliku wejsciowego, uzywany podczas kodowania
    string zakodowany; ///< zakodowany tekst



    /** Funkcja sluzaca do dodawania kolejnych wezlow do listy 
    @param  element wezel ktory ma byc dodany do listy 
    */
    void push_back(Wezel *element); 


   /** Funkcja sluzaca do zwracania rozmiaru listy 
    @return  ilosc elementow w liscie 

    */
    int getSize(); 


    /** Funkcja sortujaca elementy w liscie od najmniejszego do najwiekszego elementu */
    void sortuj(); 

     /** Funkcja budujaca drzewo z listy
     @param  lista lista z ktorej ma byc zbudowane drzewo
     @return  adres wezla(korzenia) na ktorym zostalo zbudowane drzewo 
    
     */
    Wezel* makeTree(Lista *lista); 


     /** Funkcja wyswietla zawartosc drzewa(rekurencyjnie)
     @param  wezel korzen drzewa
     @param  b zakodowany znak(na poczatku jest pusty)
     
     */
    void printTree(Wezel *wezel, string b); 
   

    /** Konstruktor domyslny listy */
    Lista() 
    {
        pierwszy = nullptr;
        size = 0;
        zakodowany = "";
        
    }
    
    /** Struktura porownujaca dwa wezly  */
    struct comp
    {
        /** Operator konwersji porownujacy wartosc lewego  wezla z prawym
            @param  lewy adres lewego wezla
            @param  prawy adres prawego wezla
            @return  wartosc true jesli lewy jest wiekszy od prawego. False jesli prawy jest wiekszy od lewego
        */
        bool operator()(Wezel* lewy, Wezel* prawy);
    };

};