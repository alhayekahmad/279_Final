#include "Room.h"

Room::Room()
{
    setMovies();
}

int Room::getRoom()
{
    return roomNumber;
}

void Room::setMovies()
{
    // reading a file
    ifstream inFile;
    inFile.open("/Users/tonykaraj/Desktop/file.txt");
    if (!inFile)
    {
        cerr << "Unable to open file datafile.txt";
        exit(1); // call system to stop
    }
    string name;
    string time;
    while (getline(inFile, name) && getline(inFile, time))
    {
        //while (inFile >> time) {
        Movie m(name, time);
        movies.push_back(m);
        //}
    }
    inFile.close();
}

void Room::printMovies()
{
    int i = 1;
    for (Movie m : movies)
    {
        cout << i << ") ";
        m.toString();
        i++;
    }
}

Movie Room::chooseMovie(int i)
{
    int j = 1;
    for (Movie m : movies)
    {
        if (j == i)
        {
            return m;
        }
        else
            j++;
    }
    cout << "invalid number! please enter a valid number from the list showing below! " << endl;
    printMovies();
    cout << "Please enter a number form the list!" << endl;
    cin >> i;
    return chooseMovie(i);
}
