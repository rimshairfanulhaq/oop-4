#include "Pant.h"


Pant::Pant(const char* a, double b, const char* c,float d,const char* e, bool f):Catergory(a,b,c)
{
	int sizee = 0;
	for (int i = 0; e[i] != '\0'; i++)
	{
		sizee = sizee + 1;
	}
	color = new char[sizee + 1];
	for (int i = 0; i < sizee; i++)
	{
		color[i] = e[i];
	}
	color[sizee] = '\0';

	size = d;
	belt = f;
}
void Pant::display()
{
	Catergory::display();
	cout << "Pant size: " << size << endl;
	cout << "Pant color: " << color << endl;
	if (belt == 0)
	{
		cout << "No belt included" << endl; 
	}
	else
	{
		cout << "Belt inculded" << endl;
	}

}