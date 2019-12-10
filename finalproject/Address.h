#pragma once
#include <string>
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <iostream>

using namespace std;
class Address
{
private:
	string st_address;
	string state;
	string zip_code;
	string country;
	string city;

public:
	Address() {
		setAddress();
	}
	Address(string st, string state, string zip, string country, string city);
	vector<string> reString();
	
	void setAddress();
	string checkState();
	string checkStAddress();
	string checkZip();
	string checkCountry();
	string checkCity();
	bool hasState(string c);
	void toString();
};