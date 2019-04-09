#include "Admin.h"
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
