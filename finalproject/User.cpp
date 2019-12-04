#include "User.h"

User::User()
{
    setUser();
}

void User::setUser()
{
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cout << "Enter first name: ";
    string first;
    getline(cin, first);
    this->firstName = first;
    string last;
    cout << "Enter last name: ";
    getline(cin, last);
    this->lastName = last;
    this->pass_word = new Password();
    this->home_address = new Address();
    this->email = new Email();
    this->credit_card = new Payment();
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
		else cout << "number invalid" << endl;*/
    case 4:
        return settings();
    default:
        cout << "Bye" << endl;
    }
}
