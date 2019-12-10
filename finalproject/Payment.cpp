#include "Payment.h"
#include <iostream>
#include <regex>


Payment::Payment(string number, string date, string three) {
	this->number = number;
	this->exDate = date;
	this->threeN = three;
}
void Payment::setPayment()
{
	this->number = checkN();
	this->threeN = checkT();
	this->exDate = checkDate();
}
string Payment::getDate() {
	return exDate;
}
string Payment::getNumber() {
	return number;
}
string Payment::getThree() {
	return threeN;

}
string Payment::checkDate()
{
	string date;
	cout << "Enter expiration date using format xx/xx: ";
	getline(cin, date);
	smatch matches;
	regex isDate("^(0[1-9]|1[012])[- /.](0[1-9]|[12][0-9]|3[01])$");
	sregex_iterator currentMatch(date.begin(), date.end(), isDate);
	sregex_iterator noMatch;
	if (currentMatch == noMatch)
	{
		return checkDate();
	}
	else
		return date;
}

string Payment::checkN()
{
	cout << "------PAYMENT_INFO------" << endl;
	string num;
	regex reg("\\d{4,12}");
	cout << "Enter card number: ";
	getline(cin, num);
	sregex_iterator currentMatch(num.begin(), num.end(), reg);
	sregex_iterator noMatch;
	num.erase(remove(num.begin(), num.end(), ' '), num.end());
	if (currentMatch != noMatch)
	{
		return num;
	}

	else
	{
		cout << "Error: invalid card number" << endl;
		return checkN();
	}
}

string Payment::checkT()
{
	string code;
	cout << "Enter the security code on the back of the card: ";
	getline(cin, code);
	regex reg("^(\\d{3})$");
	sregex_iterator it(code.begin(), code.end(), reg);
	sregex_iterator itEnd;
	if (it != itEnd)
	{
		return code;
	}
	return checkT();
}

void Payment::toString()
{
	cout << "CCN :" << endl
		<< number << endl
		<< exDate << "  " << threeN;
}