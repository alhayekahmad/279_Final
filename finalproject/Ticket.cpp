#include"Ticket.h"
void Ticket::setTicket(char level, int seatNumber) {


	this->level = level;
	this->seatNumber = seatNumber+1;


	this->taken = false;


}
void Ticket::printTicket() {
	std::cout << "Movie Name: " << movieName << std:: endl <<
		"Time: " << time << std::endl << "Room number: " << roomNumber << std::endl
		<< "Seat: " << level << " " << seatNumber << std::endl;
}
void Ticket::toString() {
	std::cout << "Seat: " << level << " " << seatNumber << ((taken == 0) ? "*" : "X") << "  " ;

}
void Ticket::buyTicket(std::string movieName, int roomNumber, std::string time) {
	this->movieName = movieName;
	this->roomNumber = roomNumber;
	this->time = time;
	this->taken = true;
	//buyer.addOrder(*this);


}