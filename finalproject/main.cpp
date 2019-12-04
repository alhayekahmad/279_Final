#include "User.h";
#include "Room.h";
#include <iostream>

int main()
{
    std::cout << "Welcome to the movie theater!" << std::endl;
    std::cout << "Please select an option:" << std::endl;
    std::cout << "1. Login" << std::endl;
    std::cout << "2. Create an account" << std::endl;
    std::cout << "3. Checkout as guest" << std::endl;
    int selection;
    std::cout << "Selection: ";
    std:: cin >> selection;
    switch (selection)
    {
        case 1: 
        {
            //TODO
            break;
        }

        case 2:
        {
            User u;
            u.setUser();
            break;
        }
        
        case 3:
        {
            //TODO
            break;
        }
    }
}