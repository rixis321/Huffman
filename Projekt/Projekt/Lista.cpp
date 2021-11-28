
#include "Lista.h"
#include <string>
#include <iostream>

using namespace std;

	Wezel* pierwszy;

    void Lista::push_back(string element)
    {
        Wezel* nowy = new Wezel;
        nowy->slowo = element;
        if (pierwszy == nullptr)
        {
            pierwszy = nowy;
        }
        else
        {
            Wezel* temp = pierwszy;
            while (temp->nastepny)
            {
                temp = temp->nastepny;
            }
            temp->nastepny = nowy;
            nowy->nastepny = nullptr;
        }
    }

    void Lista::showLista()
    {
        Wezel* temp = pierwszy;
        while (temp)
        {
            cout << temp->slowo << " ";
            temp = temp->nastepny;
        }
    }

    void Lista::sortuj()
    {
        Wezel* temp = pierwszy;
        while (temp)
        {
            string wyraz = temp->slowo;
            for (int i = 0; i < wyraz.size(); i++)
            {
                if()
            }
           temp = temp->nastepny;
        }
    }

    
