#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>
using namespace std;

class Admin
{
private:
	string _UserId;
	string _password;

public:
	string getUserId();
	string getpassword();
	void setUserId(string UserId);
	void setpassword(string password);
};
#endif 
