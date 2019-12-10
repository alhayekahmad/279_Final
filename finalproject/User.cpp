#include "User.h"
#include<fstream>
set<string> User::userNames;
User::User()
{
	setUser();
	saveUser();
}
User::User(string user_name, string first, string last, string phone , Password p ,Address a,Payment c, Email e) {
	this->user_name = user_name;
	userNames.insert(user_name);
	this->firstName = first;
	this->lastName = last;
	this->phone_number = phone;
	this->pass_word = &p;
	this->home_address = &a;
	this->credit_card = &c;
	this->email = &e;
	//saveUser();


}
void User::saveUser() {
	ofstream inFile;

	inFile.open("C:\\Users\\Ahmad\\source\\repos\\MovieBooking\\users.txt", std::ios::app);
	if (!inFile) {
		cerr << "Unable to open file users.txt";
		exit(1);   // call system to stop

	}
	string userPass;
	

	userPass = user_name + pass_word->getPassword();
	inFile << endl;
	inFile << userPass << endl;
	inFile << user_name << endl;
	inFile << firstName << endl << lastName << endl << phone_number << endl;
	inFile << pass_word->getPassword ()<< endl << pass_word->getQ1() << endl << pass_word->getQ2() << endl;
	vector<string> ad = home_address->reString();
	for (auto s : ad)
		inFile << s << endl;
	vector<string> py;
	py.push_back(credit_card->getNumber());
	py.push_back(credit_card->getDate());
	py.push_back(credit_card->getThree());
	for (auto s : py)
		inFile << s << endl;
	inFile << email->getEmail()<<endl;




}

void User::setUser()
{
	//cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	

	
	this->firstName = checkFirstName();
	//this->user_name = checkUserName();
	
	
	this->lastName = checkLastName();
	this->pass_word = new Password();
	this->home_address = new Address();
	this->phone_number = checkPhone();
	this->email = new Email();
	this->credit_card = new Payment();
	this->user_name = checkUserName();
	void saveDate();

}

void User::saveDate() {
	fstream inFile;

	inFile.open("C:\\Users\\Ahmad\\source\\repos\\MovieBooking\\users.txt", std::ios::app);
	inFile << endl; // to get new line
	if (!inFile) {
		cerr << "Unable to open file users.txt";
		exit(1);   // call system to stop

	}

	
	inFile.close();


}
string User::checkUserName() {
	string user_Name;
	cout << "PLease enter user name: ";
	getline(cin, user_Name);
	
	if (userNames.find(user_Name) == userNames.end()) {
		userNames.insert(user_Name);
		return user_Name;
	}
	cout << "Error: User Name is in use by another user" << endl;
	return checkUserName();
	
}

string User::checkFirstName() {
	string name;
	cout << "Enter first name: ";
	getline(cin, name);
	regex reg("[a-z]");
	sregex_iterator it(name.begin(), name.end(), reg);
	sregex_iterator itEnd;
	if (it != itEnd) {
		return name;
	}
	else {
		cout << "Error: Invalid First Name" << endl;
		return checkFirstName();
	}

}
string User::checkLastName() {
	string name;
	cout << "Enter Last name: ";
	getline(cin, name);
	regex reg("[a-z]");
	sregex_iterator it(name.begin(), name.end(), reg);
	sregex_iterator itEnd;
	if (it != itEnd) {
		return name;
	}
	else {
		cout << "Error: Invalid Last Name" << endl;
		return checkLastName();
	}




}

string User::checkPhone()
{
	cout << "Please enter your phone number: ";
	string phoneNumber;
	getline(cin, phoneNumber);
	regex reg("\\d{10}");
	sregex_iterator it(phoneNumber.begin(), phoneNumber.end(), reg);
	sregex_iterator itEnd;
	if (it == itEnd)
	{
		cout << "Error: Invalid phone number" << endl;
		return checkPhone();
	}
	return phoneNumber;
}
void User::toString() {
	cout <<"Acoount name: " <<firstName << " "<< lastName<<endl;

}


/*
void User::settings()
{
	cout << "1_ Profile: firstname, lastname and address." << endl
		<< "2_ Payment" << endl
		<< "3_ Security" << endl
		<< "4_ Show manue again" << endl
		<< "5_ exit" << endl;

	int i;
	cout << "Please enter a number from" << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "User name: " << endl
			<< user_name << endl
			<< "first name: " << firstName << endl
			<< "last name: " << lastName << endl
			<< home_address << endl;
		break;
	case 2:
		cout << credit_card << endl;
		break;
	/*case 3:

			cout << "1_ change password: " << endl << "2_ forgot password" << endl;
			int j;
			cout << "Please enter a number: " << endl;
			cin >> j;
			if (j == 1) {
				pass_word->changePassword;
			}
			else if (j == 2)
				pass_word->forgetPassword;
			else cout << "number invalid" << endl;
			
	case 4:
		return settings();
	default:
		cout << "Bye" << endl;
	}
}

*/