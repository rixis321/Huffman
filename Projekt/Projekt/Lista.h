#pragma once
#include "Wezel.h"
struct Lista
{

    Wezel* pierwszy;

    void push_back(string element);

    void push_back(Wezel *element);

    void showLista();

   void zlicz(Lista *lista);

    Lista()
    {
        pierwszy = nullptr;
    }
   

};