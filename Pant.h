#pragma once
#include"Catergory.h"
class Pant :virtual public Catergory
{
protected:
	float size;
	 char* color;
	bool belt;
public:
	
	Pant(const char*, double, const char* ,float, const char*, bool);
	void display();
};

