#pragma once
#include <string>
#include <iostream>

using namespace std;
class Password
{
private:
	string password;
	string securityQ1;
	string securityQ2;
	void setPassword();

public:
	Password();
	Password(string password, string securityQ1, string SecurityQ2);
	void changePassword(void);
	void forgotPassword();
	string getQ2();
	string getQ1();
	string getPassword();
};