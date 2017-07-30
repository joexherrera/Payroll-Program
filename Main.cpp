#include <iostream>
#include <string>
#include "Commission.h"
#include "Hourly.h"
#include "Salary.h"
using namespace std;

void main()
{
	Commission myEmployee;
	//Hourly myEmployee;
	//Salary myEmployee;

	myEmployee.setEmpnum(362564);
	myEmployee.setPieces(80);
	myEmployee.setRate(25);
	//myEmployee.setHours(40);
	//myEmployee.setSalary(2400);

	//commission test
	
	
	myEmployee.myCommissionPay();

	cout << "Hello, your employee number is: " << myEmployee.getEmpnum() << endl;
	cout << "Your total pay for " << myEmployee.getPieces() << " pieces at " << myEmployee.getRate();
	cout << " per piece is: $" << myEmployee.myCommissionPay();
	cout << endl;
	
	
	//hourly test

	/*
	myEmployee.myHourlyPay();


	cout << "Hello, your employee number is: " << myEmployee.getEmpnum() << endl;
	cout << "Your total pay for " << myEmployee.getHours() << " hours at $" << myEmployee.getRate();
	cout << " per hour is: $" << myEmployee.myHourlyPay();
	cout << endl;
	*/
	

	//salary test
	
	/*
	myEmployee.mySalaryPay();

	cout << "Hello, your employee number is: " << myEmployee.getEmpnum() << endl;
	cout << "Your total pay for this pay period is $" << myEmployee.getSalary() << endl;
	*/
	

	system("pause");

}//end of main

/*
COMMISSION TEST

Hello, your employee number is: 362564
Your total pay for 80 pieces at 25 per piece is: $2000
Press any key to continue . . .

HOURLY TEST

Hello, your employee number is: 362564
Your total pay for 40 hours at $25 per hour is: $1000
Press any key to continue . . .

SALARY TEST

Hello, your employee number is:362564
Your total pay for this pay period is $2400
Press any key to continue . . .
*/