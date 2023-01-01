#pragma once
#include"hospital.h"
class doctor : public hospital
{
private:
	int a ;
public:

	void doctor_list(int b);
	doctor();
	~doctor();
};

