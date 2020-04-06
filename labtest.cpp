#include<iostream>
#include<string>
#include "employee.h"
using namespace std;
int main()
{

	ProductionWorker info;
	char name[100];
	int num;
	int date;
	int shift;
	double rate;
	cout << "What is the employee's name? ";
	cin.getline(name, 100);

	cout << "What is the employee's number? ";
	cin >> num;

	cout << "What is the employee's hire date?\n";
	cout << "(Month, day, and year without any slashes,\n";

	cin >> date;

	cout << "Does the employee work shift 1 or shift 2? ";
	cin >> shift;

	cout << "How much does the employee make per hour? ";
	cin >> rate;
	info.setEmpName(name[100]);
	info.setEmpNum(num);
	info.setHireDate(date);
	info.setShift(shift);
	info.setHourlyPayRate(rate);
	cout << "\n\nHere is the employee's data:\n\n";
	cout << "Employee's Name: " << name << endl;
	cout << "Employee's Number: " << info.getEmpNum() << endl;
	cout << "Employee's Hire Date: " << info.getHireDate() << endl;
	cout << "Employee's Shift: " << info.getShift() << endl;
    cout << "Employee's Hourly Pay Rate: $" << info.getHourlyPayRate() << endl << endl;
	return 0;
	
	
}
