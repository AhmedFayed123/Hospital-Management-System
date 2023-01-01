// hospital management system (project).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"hospital.h"
#include"doctor.h"
#include"patient.h"
int main()
{

    cout << "                                       hospital management system\n";
    cout << "                         _________________________________________________________\n\n";
	int n = 0, m = 0, z, r, q = 0;
	string a, b, c, d;
	patient p1;
	hospital h1;
	hospital h2;

	h2.hospital_ditails();

	p1.setpatient_data(a, b, c, d);
	p1.getpatient_data();
	p1.setpatient_num(n,m);
	p1.getpatient_num();

    cout << " 1. patient name: ";
	cin >> a;
	cout << " 2. patient problem:";
	cin >> b;
	cout << " 3. addres:";
	cin >> c;
	cout << " 4. date of entered data:";
	cin >> d;
	cout << " 5. patient age:";
	cin >> n;
	cout << " 6. mobile number:";
	cin >> m;
	cout << "\n\n                              patient data entered successfuly !\n\n ";
	cout << "   \n                  ________________________________________________________________________   \n";
	doctor d1;
	d1.doctor_list(q);
	cout << "\n                     ________________________________________________________________________\n\n\n";


    cout << "                      1. enter range of amount treatment:";
	cin >> z;
	cout <<"                      2. enter mobile number:";
	cin >> r;
	h1.payment(z, r);

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
