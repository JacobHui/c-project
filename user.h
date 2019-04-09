#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
private:
	string _UserId;
	string _Name;
	string _section;
	int _dateOfBirth;
	string _address;

public:
	virtual void outputBasicInfo() = 0;
	virtual void outputAttributeInfo() = 0;
	User();
	User(string TypeOfUser) {
		
	}

};

class Scout : public User {
private:
	string SCTrank[3] = { "Member", "Patrol Leader", "Assistance Patrol Leader" };

public:
	void outputBasicInfo();
	virtual void outputAttributeInfo();
};

class Scouter : public User {
private:
	string SCMrank[3] = { "Scout Leader", "Assistant Scout Leader", "Rover Scout Leader" };

public:
	virtual void outputBasicInfo();
	virtual void outputAttributeInfo();
};

class Venture : public User {
public:
	virtual void outputBasicInfo();
	virtual void outputAttributeInfo();
};

class Rover : public User {
public:
	virtual void outputBasicInfo();
	virtual void outputAttributeInfo();
};
#endif 