#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>
using namespace std;

class Equipment {
private:
	string itemCode;
	string itemName;
	string brand;
	string itemType;
	string dateOfPurchase;
	string condition;
	string status;

public:
	virtual void outputBasicInfo();
	virtual void outputAttributInfo();
	Equipment();							//	GENERAL Function
	Equipment(string TypeOfEquipment);		//	SPECIFIC Function
};
	
class Tent : public Equipment {
private:
	int pplnum[6] = { 2,4,6,8,10,16 };  
	string tentType[5] = {"lightweight", "family", "wall","tunnel","dome" };
	int numberOfDoors[3] = {1,2,4};
	bool doubleLayer;
	string colour[5] = {"blue", "orange", "yellow", "grey", "red"};

public:
	virtual void outputBasicInfo();
	virtual void outputAttributInfo();
};
class Stove : public Equipment {
private:
	string stoveType[3] = {"ultralight", "lightweight", "table"};
	string fuelType[3] = {"stove gas", "screw headed gas", "wax"};

public:
	virtual void outputBasicInfo();
	virtual void outputAttributInfo();
};

class Lantern : public Equipment {
private:
	string lanternSize[2] = {"hiking", "camping"};
	string lanternType[4] = {"head lamp", "table lamp", "led lamp", "beam lamp" };
	string fuelType[6] = { "AA batteries", "AAA batteries", "C batteries", 
		"D batteries", "stove gas", "screw headed gas" };
public:
	virtual void outputBasicInfo();
	virtual void outputAttributInfo();
};
#endif

