#include "filehandler.h"		//	insert tabulated files
#include "camp_equipment.h"		// display list of camp equipment
#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Admin
{
private:
	string _UserId;
	string _password;
	int _loanDate;
	string _itemCode;
	string _itemName;
	string _NameOfBorrower;
	int _returnDate;
	string _status;

public:
	string getUserId();
	string getpassword();
	void setUserId(string UserId);
	void setpassword(string password);
	Admin();
	void loanRecord(int _loanDate, string _itemCode, string _itemName,
		string _NameOfBorrower, int _returnDate, string _status);
	void displayloanRecord();

};
#endif 
