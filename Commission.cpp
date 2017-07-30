#include <iostream>
#include "Commission.h"

using namespace std;

Commission::Commission()
{
	empnum = 0;
	pieces = 0;
	rate = 0;
}

void Commission::setName(string n)
{
	name = n;
}
string Commission::getName()
{
	return name;
}

void Commission::setType(string t)
{
	name = t;
}
string Commission::getType()
{
	return type;
}
void Commission::setEmpnum(int e)
{
	empnum = e;
}
int Commission::getEmpnum()
{
	return empnum;
}
void Commission::setPieces(int p)
{
	pieces = p;
}
int Commission::getPieces()
{
	return pieces;
}
void Commission::setRate(int r)
{
	rate = r;
}
int Commission::getRate()
{
	return rate;
}
void Commission::setTotal_pay(int t)
{
	total_pay = t;
}
int Commission::getTotal_pay()
{
	return total_pay;
}
int Commission::myCommissionPay()
{
	total_pay = (pieces * rate);
	return total_pay;
}