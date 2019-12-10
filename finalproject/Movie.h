#pragma once
#include"Ticket.h"
#include<vector>
#include<map>
using namespace std;
class Movie {
private:
	string movieName;
	Ticket tickets [5][11];
	string movieTime;

public:
	Movie(string movieName, string movieTime);
	void setMovieTickets();
	void printSeats();
	void toString();

};