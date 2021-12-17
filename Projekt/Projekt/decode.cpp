#include "decode.h"
#include <iostream>
string decode(Wezel* korzen, string coded)
{
    string decoded = "";
    Wezel* aktualny = korzen;
    for (int i = 0; i < coded.size(); i++)
    {
        if (coded[i] == '0')
        {
            if (aktualny->lewy->znak != '$')
            {
                decoded += aktualny->lewy->znak;
                aktualny = korzen;

            }
            else
            {
                aktualny = aktualny->lewy;
            }
        }
        else
        {
            if (aktualny->prawy->znak != '$')
            {
                decoded += aktualny->prawy->znak;
                aktualny = korzen;
            }
            else
            {
                aktualny = aktualny->prawy;
            }
        }

    }
    return decoded;
}