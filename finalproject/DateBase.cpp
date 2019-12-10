#include"DateBase.h"
#include <fstream>
#pragma warning(disable : 4996)
map<string, User> DateBase:: users;
// string is usernamefollowe by password


DateBase::DateBase() {
//	loadData();
	
}
void DateBase::loadData() {
	fstream inFile;
	
	inFile.open("C:\\Users\\Ahmad\\source\\repos\\MovieBooking\\users.txt");
	if (!inFile) {
		cerr << "Unable to open file users.txt";
		exit(1);   // call system to stop

	}
	string firstIndex;
	while (getline(inFile, firstIndex)) {
		string arr[17];
		arr[0] = firstIndex;
		for (int i = 1; i < 17; i++) {
			 getline(inFile, firstIndex);
			 arr[i] = firstIndex;
		}
		Password p(arr[5], arr[6], arr[7]);
		Address ad(arr[8], arr[9], arr[10], arr[11], arr[12]);
		Payment c(arr[13], arr[14], arr[15]);
		Email e(arr[16]);
		User u(arr[1], arr[2], arr[3], arr[4], p,ad,c,e);
		this->users.insert(pair <string, User>(arr[0], u));
		
	
	}

	inFile.close();



}
User DateBase::guestLog() {
	string admin = "admin-99-";

	if (users.find(admin) != users.end()) {
		return users.at(admin);
	}
	else {
		cout << "no guest log";
		exit(0);
		
	}
	

}