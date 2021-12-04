
#include "Lista.h"
#include <string>
#include <iostream>
#include<map>
#include "Zamiana.h"

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
    void Lista::push_back(Wezel *element)
    {
        Wezel* nowy = element;
        if (pierwszy == nullptr)
        {
            pierwszy = nowy;
            size++;
        }
        else
        {
            Wezel* temp = pierwszy;
            while (temp->nastepny)
            {
                temp = temp->nastepny;
            }
            size++;
            temp->nastepny = nowy;
            nowy->nastepny = nullptr;
        }
    }

    void Lista::showLista()
    {
        Wezel* temp = pierwszy;
        while (temp)
        {
            cout << temp->znak << " : " << temp->count << endl;  
            temp = temp->nastepny;
        }
    }

     void Lista::zlicz(Lista * lista)
    {
        Lista* lista2 = new Lista;
        map<char, int> counter;
        Wezel* temp = pierwszy;
        while (temp)
        {
            string wyraz = temp->slowo;
            for (char c : wyraz)
            {

                if (counter.find(c) == counter.end())
                {
                    counter[c] = 1;
                }
                else
                {
                    counter[c]++;
                }
            }
           temp = temp->nastepny;
        }
       
        for (map<char, int>::iterator it = counter.begin(); it != counter.end(); it++)
        {
            Wezel* p = new Wezel;
            p->znak = it->first;
            p->count = it->second;
            lista2->push_back(p);
   
        }

        *lista = *lista2; 
    }

     void Lista::sortuj()
     {
         Wezel* temp = pierwszy;
         while (temp)
         {
             Wezel* min = temp;
             Wezel* p = temp->nastepny;

             while (p)
             {
                 if (min->count > p->count)
                 {
                     min = p;
                   
                 }
                 p = p->nastepny;
             }

             int x = temp->count;
             temp->count = min->count;
             min->count = x;
             temp = temp->nastepny;
         }
         
     }
 

    
