#pragma once
#include<iostream>
using namespace std;
class Catergory
{
protected:
	char* customerName;
	double phoneNumber;
	char* review;

public:
	Catergory(const char*, double,const char*);
	void display();
};

