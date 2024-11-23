#ifndef PROPERTY_H
#define PROPERTY_H
#include<string>
#include<iostream>
using namespace std;
class Property
{
private:
	int propertyId;
	string propertyName;
	string propertyType;
	int propertyValue;
	string propertyAddress;
	int numberOfBedrooms;
	int numberOfBathrooms;
	int calculatePropertyTax;
public:
	int getPropertyId();
	void setPropertyId(int pid); 
	string getPropertyName(); 
	void setPropertyName(string pna);
	string getPropertyType();
	void setPropertyType(string pty);
	int getPropertyValue();
	void setPropertyValue(int pv);
	string getPropertyAddress();
	void setPropertyAddress(string gpa);
	int getnumberOfBedrooms();
	void setnumberOfBedrooms(int bed);
	int getnumberOfBathrooms();
	void setnumberOfBathrooms(int bath);
	float getcalculatePropertyTax(float cpt);
	Property();
	~Property()
	{
		cout << "I stoled your properties" << endl;
	}
};
#endif