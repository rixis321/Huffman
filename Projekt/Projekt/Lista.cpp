
#include "Lista.h"
#include <string>
#include <iostream>
#include<map>


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
        nowy->znak = element->znak;
        nowy->lewy = element->lewy;
        nowy->prawy = element->prawy;
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

    int Lista::getSize()
    {
        return size;
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
            char a = temp->znak;
            int x = temp->count;
            temp->count = min->count;
            temp->znak = min->znak;
            min->count = x;
            min->znak = a;
            temp = temp->nastepny;
         }
         
     }

     void Lista::makeTree(Lista* lista)
     {
         int counter = lista->getSize();
         
         while (counter > 1)
         {
             
             Wezel* temp1 = lista->pierwszy;
             Wezel* temp2 = lista->pierwszy->nastepny;
             if (temp2 == nullptr)
             {
                 break;
             }
             lista->pierwszy = temp2->nastepny;
             Wezel* nowy = new Wezel;
             nowy->count = temp1->count + temp2->count;
             if (temp1->count <= temp2->count)
             {
                 nowy->lewy = temp1;
                 nowy->prawy = temp2;
                 nowy->znak = '$';
             }
             lista->push_back(nowy);
             lista->sortuj();
             counter--;
         }
     }

     void Lista::printTree(Wezel *wezel, string b)
     {

         if (wezel == nullptr)
         {
             return;
         }
       

         if (wezel->znak  != '$')
         {
             cout << wezel->znak << " " << b << endl;

         }
         else
         {
             printTree(wezel->lewy, b + "0");
             printTree(wezel->prawy, b + "1");
             
         }
     }
 

    
