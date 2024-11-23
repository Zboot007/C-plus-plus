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
//constructors
ComercialProperty::ComercialProperty()
{
	numOfRooms = 1;
	businessType = "Star";
}
ComercialProperty::ComercialProperty(string businesstype, int numofrooms)
{
	businessType = businesstype;
	numOfRooms = numofrooms;
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