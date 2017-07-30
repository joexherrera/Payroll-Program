#include <iostream>

using namespace std;

class Salary
{
private:
	string name, type;
	int empnum, salary, rate, total_pay;

public:
	Salary();

	//setters and getters
	void setName(string);
	string getName();

	void setType(string);
	string getType();

	void setEmpnum(int);
	int getEmpnum();

	void setSalary(int);
	int getSalary();

	void setRate(int);
	int getRate();

	void setTotal_pay(int);
	int getTotal_pay();

	int mySalaryPay();

}; // end of class Commission
