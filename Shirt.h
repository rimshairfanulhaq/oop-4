#pragma once
#include"Catergory.h"
class Shirt:virtual public Catergory
{
protected:
	float sizee;
	 char* sleeves;

public:
	
	void display();
	Shirt(const char*, double,const char*,float, const char*);


};

