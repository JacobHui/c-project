#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

using namespace std;

class User {
protected:
	string _UserId;
	string _Name;
	string _section;
	int _dateOfBirth;
	string _address;

public:
	virtual void outputUserAttributeInfo() = 0;
	string getUserId();
	string getName();
	string getsection();
	int getdateOfBirth();
	string getaddress();
	User();
	User(string UserId, string Name, string section, int dateOfBirth, string address);
	bool canBorrow();

};

class Scout : public User {
private:
	string _SCTrank;
	int MaxLoan;

public:
	Scout(string UserId, string Name, string section, int dateOfBirth, string address, string SCTrank);
};

class Scouter : public User {
private:
	string _SCMrank;
	int MaxLoan;

public:
	Scouter(string UserId, string Name, string section, int dateOfBirth, string address, string SCMrank);
};

class Venture : public User {
private:
	int MaxLoan;
public:
	Venture(string UserId, string Name, string section, int dateOfBirth, string address);
};

class Rover : public User {
private:
	int MaxLoan;
public:
	Rover(string UserId, string Name, string section, int dateOfBirth, string address);
};
#endif 
