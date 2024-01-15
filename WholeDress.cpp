#include "WholeDress.h"




WholeDress::WholeDress(const char* a, double b, const char* c, float d, const char* e,bool f, float g, const char* h ,double i)
	:Pant(a,b,c,d,e,f),Shirt(a,b,c,g,h),Catergory(a,b,c)
{
	payment = i;
}
void WholeDress::display()
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


	cout << "Payment: ";
	if (payment > 0)
	{
		cout <<"Rs."<< payment << endl;
	}
	else
	{
		cout << "Invalid" << endl;
	}
}