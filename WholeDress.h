#pragma once
#include"Pant.h"
#include"Shirt.h"
class WholeDress:virtual public Pant,virtual public Shirt
{
protected:
	double payment;

public:
	WholeDress(const char* , double , const char* , float , const char* , bool , float , const char* , double);
	void display();
};

