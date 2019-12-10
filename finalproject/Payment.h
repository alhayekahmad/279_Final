#pragma once
#include <string>

using namespace std;
class Payment
{
private:
	string number;
	string exDate;
	string threeN;

public:
	Payment() {
		setPayment();
	};
	string getNumber();
	string getDate();
	string getThree();
	Payment(string number,string date,string three);
	void setPayment();
	string checkN();
	string checkDate();
	string checkT();
	void toString();
};