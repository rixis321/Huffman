
#include "Lista.h"
#include <string>
#include <iostream>
#include<map>
#include <queue>

using namespace std;

	Wezel* pierwszy;

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
     struct comp
     {
         bool operator()(Wezel* lewy, Wezel* prawy)
         {
             return lewy->count > prawy->count;
         }
     };

     Wezel* Lista::makeTree(Lista* lista)
     {
         int counter = lista->getSize();
         Wezel* temp = lista->pierwszy;
         priority_queue < Wezel*, vector<Wezel*>, comp> kolejka;
         while (temp)
         {
             kolejka.push(temp);
             temp = temp->nastepny;
         }

         while (counter > 1)
         {
             Wezel* e1 = kolejka.top();
             kolejka.pop();
             Wezel* e2 = kolejka.top();
             kolejka.pop();
             Wezel* temp = new Wezel(e1->count + e2->count, '$', e1, e2);
             kolejka.push(temp);
             counter--;
         }
         Wezel* temp2 = kolejka.top();
         return temp2;
     }

     void Lista::printTree(Wezel *wezel, string b)
     {

         if (wezel == nullptr)
         {
             return;
         }
       

         if (wezel->znak != '$')
         {
             cout << wezel->znak << " " << b << endl;
            

         }
             printTree(wezel->lewy, b + "0");
             printTree(wezel->prawy, b + "1");

         
             
         
     }
 

    
