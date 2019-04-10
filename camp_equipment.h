#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>
using namespace std;

class Equipment {
private:
	string _itemCode;
	string _itemName;
	string _brand;
	string _itemType;
	int _dateOfPurchase;
	string _condition;
	string _status;

public:
	virtual void outputEquipAttributeInfo() = 0;	// characteristic of Abstract class
	Equipment(string itemCode, string itemName, string brand, string itemType, int dateOfPurchase, string condition, string status);
	void outputBasicInfo(); 
	bool isReturn();
	bool Avaliable();
	
};
	
class Tent : public Equipment {
private:
	int pplnum;
	string tentType;
	int numberOfDoors;
	bool doubleLayer;
	string colour;

public:
	
	void outputTentAttributeInfo();
};
class Stove : public Equipment {
private:
	string stoveType;
	string fuelType;

public:
	void outputStoveAttributeInfo();
};

class Lantern : public Equipment {
private:
	string lanternSize;
	string lanternType;
	string fuelType;
		
public:
	void outputLanternAttributeInfo();
};
#endif
