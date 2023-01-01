#pragma once
#include "hospital.h"
class patient:public hospital
{
public:
	void setpatient_num(int num1,int num2);
	int getpatient_num();
	void setpatient_data(string n, string p, string add, string d);
	string getpatient_data();
	patient();
	~patient();
};

