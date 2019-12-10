#pragma once
#include "User.h"
#include <set>
#include <map>
#include <fstream>
class DateBase {
private:

	// the string represent username and password

	static map<string, User> users;
	

public:
	DateBase();
	void  loadData();
	User guestLog();



	/*
	void userLog();
	void savingDate();
	void userSingUp();
	void checkUser(string userName);
	*/

};