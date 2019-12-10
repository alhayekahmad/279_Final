#pragma once
#include <string>
#include <iostream>
#include <regex>

using namespace std;
class Email
{
private:
	string email;

public:
	Email();
	Email(string email) ;
	string setEmail();
	string getEmail();
};