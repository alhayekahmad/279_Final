#pragma once
#include<string>
#include<iostream>
class Ticket {
private:
	bool taken;
	char level;
	int seatNumber;
	std::string movieName;
	int roomNumber;
	std::string time;
public:
	
	void setTicket(char level, int seatNumber);
	void printTicket();
	void toString();
	void buyTicket(std::string movieName, int roomNumber, std::string time);
};