#pragma once
#include "Wezel.h"
struct Lista
{

    Wezel* pierwszy;
    int size;

    void push_back(string element);

    void push_back(Wezel *element);

    int getSize();

    void showLista();

    void zlicz(Lista *lista);

    void sortuj();

    void makeTree(Lista *lista);

    void printTree(Wezel *wezel, string b);
   
    Lista()
    {
        pierwszy = nullptr;
        size = 0;
        
    }
   

};