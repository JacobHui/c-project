#include "user.h"
#include <iostream>
#include <string>
using namespace std;

string User::getUserId(){
	return _UserId;
}

string User::getName() {
	return _Name;
}

string User::getsection() {
	return _section;
}

int User::getdateOfBirth() {
	return _dateOfBirth;
}

string User::getaddress() {
	return _address;
}

User::User() {
	// later add
}

User::User(string UserId, string Name, string section, int dateOfBirth, string address) {
	_UserId = UserId;
	_Name = Name;
	_section = section;
	_dateOfBirth = dateOfBirth;
	_address = address;
}

Scout::Scout(string UserId, string Name, string section, int dateOfBirth, string address, string SCTrank) {
	this-> _UserId = UserId;
	this-> _Name = Name;
	this-> _section = section;
	this-> _dateOfBirth = dateOfBirth;
	this-> _address = address;
	this-> _SCTrank = SCTrank;
	MaxLoan = (_SCTrank == "Member") ? 1 : 3;
	
	cout << "Your maximum available loan number is " << MaxLoan << endl;
}

Scouter::Scouter(string UserId, string Name, string section, int dateOfBirth, string address, string SCMrank) {
	this->_UserId = UserId;
	this->_Name = Name;
	this->_section = section;
	this->_dateOfBirth = dateOfBirth;
	this->_address = address; 
	this->_SCMrank = SCMrank;
	MaxLoan = 5;
	cout << "Your maximum available loan number is " << MaxLoan << endl;
}

Venture::Venture(string UserId, string Name, string section, int dateOfBirth, string address) {
	this->_UserId = UserId;
	this->_Name = Name;
	this->_section = section;
	this->_dateOfBirth = dateOfBirth;
	this->_address = address;
	MaxLoan = 3;
	cout << "Your maximum available loan number is " << MaxLoan << endl;
}

Rover::Rover(string UserId, string Name, string section, int dateOfBirth, string address) {
	this->_UserId = UserId;
	this->_Name = Name;
	this->_section = section;
	this->_dateOfBirth = dateOfBirth;
	this->_address = address;
	MaxLoan = 5;
	cout << "Your maximum available loan number is " << MaxLoan << endl;
}
