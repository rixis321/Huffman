#pragma once

struct Wezel
{
	Wezel* prawy;
	Wezel* lewy;
	char znak;
	int count;

	Wezel()
	{
		lewy = prawy = nullptr;
		count = 0;
	}
	Wezel(char n, int c)
	{
		znak = n;
		count = c;
	}
	
	~Wezel()
	{
		delete lewy;
		delete prawy;
	}
};