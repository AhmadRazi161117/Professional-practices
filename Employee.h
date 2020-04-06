#include <string>
#include<iostream>
#ifndef employee_H
#define employee_H
using namespace std;
class Employee
{
	private:
		char EmpName[100];
		int EmpNum;
		int HireDate;
	public:
		void setEmpName(char);
		void setEmpNum(int);
		void setHireDate(int);
		char getEmpName() const;
		int getEmpNum() const;
		int getHireDate() const;
		Employee();
};
void Employee::setEmpName(char x)
{
	EmpName[100]= x;
}
void Employee::setEmpNum(int y)
{
	EmpNum = y;
}
void Employee::setDate(int z)
{
	HireDate = z;
}
char Employee::getEmpName() const
{
	return EmpName[100];
}
int Employee::getEmpNum() const
{
	return EmpNum;
}
int Employee::getHireDate() const
{
	return HireDate;
}
Employee::Employee()
{
	cout << "I will ask you some questions about an employee.\n\n";
}
class ProductionWorker : public Employee
{
	private:
		int Shift;
		double HourlyPayRate;
	public:
		void setShift(int);
		void setHourlyPayRate(double);
		int getShift() const;
		double getHourlyPayRate() const;
		ProductionWorker();
};
#endif
void ProductionWorker::setShift(int a)
{
	Shift = a;
}
void ProductionWorker::setHourlyPayRate(double b)
{
	HourlyPayRate = b;
}
int ProductionWorker::getShift() const
{
	return Shift;
}
double ProductionWorker::getHourlyPayRate() const
{
	return HourlyPayRate;
}
ProductionWorker::ProductionWorker()
{
	cout << "After answering the questions,\n";
	cout << "I will display the employee's information.\n\n\n";
}


