#pragma once
#include "Wezel.h"
struct Lista
{

    Wezel* pierwszy;

    void push_back(string element);

    void showLista();

    void sortuj();

    Lista()
    {
        pierwszy = nullptr;
    }
   

};