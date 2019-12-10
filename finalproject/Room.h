#pragma once
#include"Movie.h"
#include<fstream>
class Room {
private:
	int  roomNumber;
	vector<Movie> movies;
	void setMovies();
public:
	Room();
	int getRoom();
	void printMovies();
	Movie chooseMovie(int i);



};