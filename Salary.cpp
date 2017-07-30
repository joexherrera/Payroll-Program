#include <iostream>
#include "Salary.h"

using namespace std;

Salary::Salary()
{
	empnum = 0;
	salary = 0;
	rate = 0;
}

void Salary::setName(string n)
{
	name = n;
}
string Salary::getName()
{
	return name;
}

void Salary::setType(string t)
{
	name = t;
}
string Salary::getType()
{
	return type;
}
void Salary::setEmpnum(int e)
{
	empnum = e;
}
int Salary::getEmpnum()
{
	return empnum;
}
void Salary::setSalary(int s)
{
	salary = s;
}
int Salary::getSalary()
{
	return salary;
}
void Salary::setRate(int r)
{
	rate = r;
}
int Salary::getRate()
{
	return rate;
}
void Salary::setTotal_pay(int t)
{
	total_pay = t;
}
int Salary::getTotal_pay()
{
	return total_pay;
}
