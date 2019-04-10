#include "filehandler.h"		//	insert tabulated files
#include "camp_equipment.h"		// display list of camp equipment
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
	Admin();
	bool isAdminLogin(string UserId, string password);
	void displayloanRecord();

};
#endif 
