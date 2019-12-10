#pragma once
#include "Address.h"
#include "Payment.h"
#include "Email.h"
#include "Password.h"
#include <string>
#include <map>
#include <set>

using namespace std;
class User
{
	/*
	private data
	*/
private:
	string firstName;
	string lastName;
	string user_name;
	Password* pass_word;
	string phone_number;
	Address* home_address;
	Payment* credit_card;
	Email* email;
	static set<string> userNames;
	void saveDate();
	//vector< orders >>

public:
	User();
	User(string user_name,string first,string last,string phone, Password p, Address a, Payment c, Email e);
	string checkFirstName();
	string checkLastName();
	string checkPhone();
	void setUser();
	string checkUserName();
	void toString();
	void saveUser();
	//void settings();
	
};