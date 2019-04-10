#include "admin.h"
#include <iostream>
#include <string>
using namespace std;

int subMenu() {

}


int getMenuOption()
{
	system("cls");
	int option;
	do {
		cout << "Select which service you want..." << endl;
		cout << "--------------------------------" << endl;
		cout << "1.) Categorical List of Available Camp Equipment " << endl;
		cout << "2.) Your Loan Record" << endl;
		cout << "3.) " << endl;
		cout << "4.) Return Service" << endl;
		cout << "5.) Exit" << endl;
		cout << endl;
		cout << "Select your option number" << endl;
		cin >> option;
	} while (option < 1 || option > 5);
	return option;
}

int main(){
	Admin admin;
	int option = getMenuOption();

	cout << "Welcome to use our Camp Equipment Loan Services!" << endl;

	while (option != 5) {
		string UserId, password;

		cout << "Enter your UserId: ";
		cin >> UserId;

		cout << "Enter your password: ";
		cin >> password;

		if ()
		switch (option) {
		case 1: 
			//	function (display camp equipment categorical list)
			break;
		case 2:
			//	function (loan record)
		case 3:
			//	sub-menu (first time user)
		case 4:
			//	Return system
		}
		else cout << "Invalid input! Please try again!" << endl;
	}
	

	system("pause");
	return 0;
}
