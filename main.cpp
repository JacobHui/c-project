#include <iostream>
#include <string>
using namespace std;

int selectMenuOption()
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
	} while (option < 1 || option > 6);
	return option;
}

int main(){
	string UserId, password;
	system("pause");
	return 0;
}