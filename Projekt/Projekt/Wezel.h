#pragma once

struct Wezel
{
	Wezel* prawy;
	Wezel* lewy;
	Wezel* nastepny;
	char znak;
	int count;


	Wezel()
	{
		lewy = prawy = nastepny = nullptr;
		count = 0;
	}
};