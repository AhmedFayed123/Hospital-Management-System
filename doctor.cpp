#include "doctor.h"


void doctor::doctor_list(int b)
{
	a = b;
	cout << "\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout << "1_Dr.ahmed mohamed    *eye specialist \n";
	cout << "2_Dr.ahmed tarek      *heart specialist \n";
	cout << "3_Dr.ziad mohamed     *dentist specialist \n";
	cout << "4_Dr.amira elsayed    *surgeon specialist \n";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout << "select an option from 1 to 4 :";
	cin >> b;
	if (b == 1)
		cout << " \n      Dr.ahmed mohamed    *eye specialist \n\n\n";
	else if (b == 2)
		cout << " \n      Dr.ahmed tarek      *heart specialist \n\n\n";
	else if (b == 3)
		cout << "\n       Dr.ziad mohamed     *dentist specialist \n\n\n";
	else if (b == 4)
		cout << "\n       Dr.amira elsayed    *surgeon specialist \n\n\n";
	else
		cout << "\n       error :please shoose from 1 to 4 : \n";

}

doctor::doctor()
{
	cout << "\n\n                                          \" doctor list:\"\n\n";
}

doctor::~doctor()
{
	cout << "                         ___________________________________________________________________ \n\n";
	cout << "                                         okay, patient successfully booked!\n\n";
	cout << "                                                 we will call you soon!\n\n\n\n";
	cout << "*********************************************************************************************************************\n";
}
