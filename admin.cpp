#include "Admin.h"
#include<iostream>
string Admin::getUserId() {
	return _UserId;
}

string Admin::getpassword() {
	return _password;
}

void Admin::setUserId(string UserId) {
	_UserId = UserId;
}
void Admin::setpassword(string password) {
	_password = password;
}

Admin::Admin() {
	_UserId = "admin";
	_password = "admin";
}

/*bool Admin::isAdminLogin(string UserId, string password) {
	bool access = true;

	access = ((_UserId == UserId) && (_password == password)) ? true : false;
	system("cls");
	return access;
}*/

void Admin::displayloanRecord() {
	ifstream file;
	file.open("user.txt");
}
