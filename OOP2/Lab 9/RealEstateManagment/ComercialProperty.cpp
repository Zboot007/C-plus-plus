#include<iostream>
#include<string>
#include"ComercialProperty.h"
#include "Property.h"
using namespace std;
//Getter and Setter method's functions
string ComercialProperty::getBusinessType() const
{
	return businessType;
}
void ComercialProperty::setBusinessType(string businesstype)
{
	businessType = businesstype;
}
int ComercialProperty::getnumOfRooms() const
{
	return numOfRooms;
}
void ComercialProperty::setnumOfRooms(int numofrooms)
{
	if (numOfRooms > 0)
		numOfRooms = numofrooms;
	else
		cout << "Wrong number of rooms" << endl;
}
void ComercialProperty::setBusinessId(int pid)
{
	BusinessId = pid;
}
int ComercialProperty::getBusinessId() const
{
	return BusinessId;
}
//constructors
ComercialProperty::ComercialProperty()
{
	numOfRooms = 1;
	businessType = "Star";
	BusinessId = 3;
}
ComercialProperty::ComercialProperty(int pid, string Type, int numofroms)
{
	setPropertyId(pid);
	setPropertyName(Type);
	setPropertyValue(numofroms);
}
//Destructor
ComercialProperty::~ComercialProperty()
{
	cout << "Cleaned operation has been completed" << endl;
}
//Tax calculation
double ComercialProperty::calculatePropertyValueAfterTax()
{
	return(getPropertyValue() * 0.2 + getPropertyValue());
}
// Calculation and Displayment functions of virtual
double ComercialProperty::CalculateMaintanceCost()
{
	return (getPropertyValue() * 0.03);
}
void ComercialProperty::printPropertyDetails()
{
	cout << "Commercial Property Details:\n";
	cout << "Property ID: " << getPropertyId() << "\n";
	cout << "Property Name: " << getPropertyName() << "\n";
	cout << "Property Value: " << getPropertyValue() << "\n";
	cout << "Property of Commercial tax: " << calculatePropertyValueAfterTax() << endl;
	cout << "Property of Commercial Maintance cost: " << CalculateMaintanceCost() << endl;
}