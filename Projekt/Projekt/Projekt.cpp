// Projekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Wezel.h"
#include "Lista.h"
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
            cout << "-s plik ze słownikiem" << endl;
        }
    }



    string name = "Konrad";
    Wezel *p1;
    createList(p1, name);
}

