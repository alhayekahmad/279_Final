#include"Movie.h"
Movie::Movie(string movieName, string MovieTime) {
	this->movieName = movieName;
	this->movieTime = MovieTime;
	setMovieTickets();
}
void Movie::setMovieTickets() {
	try {
		string levels = "ABCDE";
		int j = 0;
		for (char a : levels) {
			

			


			for (int i = 0; i < 10; i++) {
				Ticket t;
				(t.setTicket(a, i));
				tickets[j][i] = t;

			}
			j++;
			
			
		}
	}
	catch (const out_of_range & orr) {
		cerr << "out of Range error:" << orr.what() << endl;
	}
}
void Movie::printSeats() {
	for ( int i = 0 ; i < 5 ; i++) {
		for (int j = 0; j < 10; j++) {
			tickets[i][j].toString();
		}
		
		cout << endl << endl;
	}
	//cout << endl << endl;
}
void Movie::toString() {
	cout << "Showing: " << movieName << "   time: " << movieTime << endl;
}
