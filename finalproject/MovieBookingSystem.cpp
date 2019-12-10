// MovieBookingSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"DateBase.h"
#include"windows.h"
#include"Room.h"
#include"Address.h"
#include <iostream>
#include<dos.h>

#pragma warning(disable : 4996)


 DateBase web;
void Welcome();
void qformatdown();
void qformatup();
int main()
{	
	web.loadData();
	Welcome();
  
}
void Welcome() {

	cout << "\n________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n   ----    ---     ---  ----------  ---       	-------       -----        ------     ------   ---------";

	cout << "\n    ---   -----   ---   ---         ---         ---   ---    ---   ---     --- ---   -------   ---";

	cout << "\n     --- ------- ---    -------|    ---        ---          ---     ---    ---   -----   ---   ------|";

	cout << "\n      -------------     ---         ---------  ---   ---    ---   ---      ---           ---   ---";

	cout << "\n       -----------      ----------  ---------  -------       -----         ---           ---   ---------\n\n\n";

	qformatup(); //print _-_

	cout << "\t Movie ticket Management System";

	qformatdown(); // print--_--

	cout << "\n\n---------------------------DEVELOPED BY PRITAM----------------------------------------------";



	cout << "\n\n\t\t\t\t\t     Please wait while loading\n\n";

	char a = 177, b = 219;

	cout << "\t\t\t\t\t\t";

	for (int i = 0; i <= 15; i++)

		cout << a;

	cout << "\r";

	cout << "\t\t\t\t\t\t";

	for (int i = 0; i <= 15; i++)

	{

		cout << b;

		for (int j = 0; j <= 1e8; j++);

	}


	_sleep(100000);


}
void qformatup()

{

	cout << "\n\t                  ::::::::::::::::::::::::::::::::::::::::::::::::::::::";

	cout << "\n\t::::::::::::::::::                                                      :::::::::::::::::::::::::::::::";

	cout << "\n\t  			";



}

void qformatdown()

{

	cout << "\n\t::::::::::::::::::                                                      :::::::::::::::::::::::::::::::";

	cout << "\n\t                 ::::::::::::::::::::::::::::::::::::::::::::::::::::::::";



}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
