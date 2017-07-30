#include <iostream>
#include "Hourly.h"

using namespace std;

Hourly::Hourly()
{
	empnum = 0;
	hours = 0;
	rate = 0;
}

void Hourly::setName(string n)
{
	name = n;
}
string Hourly::getName()
{
	return name;
}

void Hourly::setType(string t)
{
	name = t;
}
string Hourly::getType()
{
	return type;
}
void Hourly::setEmpnum(int e)
{
	empnum = e;
}
int Hourly::getEmpnum()
{
	return empnum;
}
void Hourly::setHours(int h)
{
	hours = h;
}
int Hourly::getHours()
{
	return hours;
}
void Hourly::setRate(int r)
{
	rate = r;
}
int Hourly::getRate()
{
	return rate;
}
void Hourly::setTotal_pay(int t)
{
	total_pay = t;
}
int Hourly::getTotal_pay()
{
	return total_pay;
}
int Hourly::myHourlyPay()
{
	total_pay = (hours * rate);
	return total_pay;
}
