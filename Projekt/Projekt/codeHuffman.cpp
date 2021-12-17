#include "code.h"
#include <vector>

void codeHuffman(Lista* lista)
{
	vector<string> v = lista->nazwy;
	string p;
	char c;
	for (int i = 0; i < v.size(); i++)
	{
		p = v[i];
		for (int j = 0; j < p.size(); j++)
		{
			c = p[j];
			code(lista->pierwszy, "", c, lista);
		}
		
			
	}
}

//vector<string> nazwa;
// for(int i = 0; i< nazwa.size();i++)
//	v