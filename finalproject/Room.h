#include "Movie.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

class Room
{
private:
    int roomNumber;
    vector<Movie> movies;
    void setMovies();

public:
    Room();
    int getRoom();
    void printMovies();
    Movie chooseMovie(int i);
};
