#include "Email.h"

Email::Email()
{
    this->email = setEmail();
}

string Email::setEmail()
{
    cout << "------EMAIL------" << endl;
    cout << "Enter email address: ";
    string email;
    getline(cin, email);
    regex reg("^[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,6}$");
    sregex_iterator it(email.begin(), email.end(), reg);
    sregex_iterator itEnd;
    if (it == itEnd)
    {
        cout << "invalid email address" << endl;
        return setEmail();
    }
    return email;
}