#include "Password.h"

Password::Password()
{
    setPassword();
}

void Password::setPassword()
{
    cout << "------PASSWORD------" << endl;
    cout << "Enter password: ";
    string p1;
    string p2;
    cin >> p1;
    cout << "Confirm password: ";
    cin >> p2;
    if (p1 != p2)
    {
        cout << "Password does not match!" << endl;
        return setPassword();
    }
    cout << "-----SECURITY_QUESTIONS------" << endl;
    cout << "Security Question #1: " << endl
         << "Name of your first pet: ";
    cin >> securityQ1;
    cout << "Security Question #2: " << endl
         << "City you were born in: ";
    cin >> securityQ2;
    password = p1;
}

string Password::getPassword()
{
    return password;
}

void Password::changePassword()
{
    cout << "Enter old password: ";
    string oP;
    getline(cin, oP);
    if (oP != password)
    {
        cout << "Error: Passwords do not match!" << endl;
        return changePassword();
    }
    setPassword();
}

void Password::forgotPassword()
{
    cout << "What is the name of your first pet?: ";
    string q1;
    getline(cin, q1);
    cout << "What city were you born in?: ";
    string q2;
    getline(cin, q2);
    if (q1 == securityQ1 && q2 == securityQ2)
    {
        setPassword();
    }
    else
    {
        cout << "Error: incorrect answers!" << endl;
        int i;
        cout << "1. Try again" << endl
             << " 2. to exit " << endl;
        cout << "Your choice: ";
        cin >> i;
        if (i == 1)
            return forgotPassword();
        else
            cout << "Auf Wiedersehen!" << endl;
    }
}