#include <iostream>

using namespace std;

class Commission
{
private:
	string name, type;
	int empnum, pieces, rate, total_pay;

public:
	Commission();

	//setters and getters
	void setName(string);
	string getName();

	void setType(string);
	string getType();

	void setEmpnum(int);
	int getEmpnum();

	void setPieces(int);
	int getPieces();

	void setRate(int);
	int getRate();

	void setTotal_pay(int);
	int getTotal_pay();

	int myCommissionPay();

}; // end of class Commission