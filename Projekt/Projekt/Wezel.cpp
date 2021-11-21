
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

	~Wezel()
	{
		delete lewy;
		delete prawy;
	}
};
