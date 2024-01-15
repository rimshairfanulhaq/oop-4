#include "Shirt.h"

Shirt::Shirt(const char* a , double b,const char* c, float d, const char* e):Catergory(a,b,c)
{
	sizee = d;
	int size = 0;
	for (int i = 0; e[i] != '\0'; i++)
	{
		size = size + 1;
	}
	sleeves = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		sleeves[i] = e[i];
	}
	sleeves[size] = '\0';
}

void Shirt::display()
{
	Catergory::display();
	cout << "Shirt size:";
	if (sizee >= 20 && sizee <= 40)
	{
		cout << "Small " << endl;
	}
	else if (sizee > 40 && sizee <= 50)
		cout << "Medium " << endl;
	else if (sizee >= 51)
		cout << "Large " << endl;
	else
		cout << "Invalid size" << endl;


	cout << "Sleeves: " << sleeves << endl;
}