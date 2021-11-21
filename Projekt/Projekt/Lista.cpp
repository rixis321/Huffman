#include "Wezel.h"
#include <string>
#include <map>
#include <queue>

using namespace std;

void createList( map<char,int> mapa)
{
	map<char, int> kontener = mapa;

	priority_queue<Wezel*, vector<Wezel*>> wezly;
	for (auto d : kontener)
	{
		wezly.push(new Wezel(d.first, d.second));
	}
	
}
