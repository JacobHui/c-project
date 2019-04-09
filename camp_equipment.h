	Equipment(string _itemCode, string _itemName, string _brand,
		string _itemType, int _dateOfPurchase, string _condition, string _status);
	void outputBasicInfo(); 
	bool isReturn();					//	GENERAL Function
	
};
	
class Tent : public Equipment {
private:
	int pplnum;
	string tentType;
	int numberOfDoors;
	bool doubleLayer;
	string colour;

public:
	
	virtual void outputAttributeInfo();
};
class Stove : public Equipment {
private:
	string stoveType;
	string fuelType;

public:
	void outputAttributeInfo();
};

class Lantern : public Equipment {
private:
	string lanternSize;
	string lanternType;
	string fuelType;
		
public:
	void outputAttributeInfo();
};
#endif
