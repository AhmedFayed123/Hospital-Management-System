#include "patient.h"

void patient::setpatient_num(int num1,int num2)
{
	num = num1;
	age = num2;
}

int patient::getpatient_num()
{
	return num,age;
}

void patient::setpatient_data(string n, string p, string add, string d)
{
	cout << "                                           \" patient data: \" \n\n";
	
	name = n;
	problem = p;
	address = add;
	date = d;
	
}

string patient::getpatient_data()
{
	return name,problem,address,date;
}

patient::patient()
{
}

patient::~patient()
{
}


