#include "Catergory.h"

Catergory::Catergory(const char* d, double e,const char* f)
{
	int size = 0;
	for (int i = 0; d[i] != '\0'; i++)
	{
		size = size + 1;
	}
	customerName = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		customerName[i] = d[i];
	}
	customerName[size] = '\0';

	phoneNumber = e;

	int sizeeee = 0;
	for (int i = 0; f[i] != '\0'; i++)
	{
		sizeeee = sizeeee + 1;
	}
	review = new char[sizeeee + 1];
	for (int i = 0; i < sizeeee; i++)
	{
		review[i] = f[i];
	}
	review[sizeeee] = '\0';
}
void Catergory::display()
{
	cout << "Customer Name " << customerName << endl;
	cout << "Phone Number " << phoneNumber << endl;
	cout << "Customer Review " << review << endl;
}
