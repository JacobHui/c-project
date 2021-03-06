#include "camp_equipment.h"
#include <string>
#include <iostream>
using namespace std;

Equipment::Equipment(string itemCode, string itemName, string brand,
	string itemType, int dateOfPurchase, string condition, string status) {
	_itemCode = itemCode;
	_itemName = itemName;
	_brand = brand;
	_itemType = itemType;
	_dateOfPurchase = dateOfPurchase;
}

void Equipment::outputBasicInfo()
{
	cout << _itemCode << "|" << _itemName << "|" << _brand << "|" << _itemType << "|" << _dateOfPurchase << "|" << _condition << "|" << _status << "|" << endl;
}


void Tent::outputTentAttributeInfo()
{
	cout << pplnum << "|" << tentType << "|" << numberOfDoors << "|" << doubleLayer << "|" << colour << endl;
}


void Stove::outputStoveAttributeInfo()
{
	cout << stoveType << "|" << fuelType << endl;
}

void Lantern::outputLanternAttributeInfo()
{
	cout << lanternSize << "|" << lanternType << "|" << fuelType << endl;
}

bool Equipment::isReturn() {
	 _status == "in" ? true : false;
}

bool Equipment::Avaliable() {
	_condition == "good" ? true : false;
}
