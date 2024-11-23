#include "ResidentialProperty.h"
#include "Property.h"
#include<iostream>
using namespace std;
//getter and setter member functions
void ResidentialProperty::setnumOfBathrooms(int bath)
{
	if (numOfBathrooms > 0)
		numOfBathrooms = bath;
	else
		cout << "Wrong number of bathrooms" << endl;
}
int ResidentialProperty::getnumOfBathrooms() const
{
	return numOfBathrooms;
}
int ResidentialProperty::getnumOfBedrooms() const
{
	return numOfBedrooms;
}
void ResidentialProperty::setnumOfBedrooms(int bed)
{
	if (numOfBedrooms > 0)
		numOfBedrooms = bed;
	else
		cout << "Wrong number of bedrooms" << endl;
}
//constructors
ResidentialProperty::ResidentialProperty()
{
	numOfBedrooms = 1;
	numOfBathrooms = 1;
	ResidanceType = "milk";
};
ResidentialProperty::ResidentialProperty(int id, string type, int value )
{
	setPropertyId(id);
	setPropertyName(type);
	setPropertyValue(value);
}
//destructor
ResidentialProperty::~ResidentialProperty()
{
	cout << "Actually there is no bathrooms and bedrooms" << endl;
}
string ResidentialProperty::getResidanceType() const
{
	return ResidanceType;
}
void ResidentialProperty::setResidanceType(string tp) {
	ResidanceType = tp;
}
//calculate Tax function
double ResidentialProperty::calculatePropertyValueAfterTax()
{
	return(getPropertyValue() * 0.1 + getPropertyValue());
}
// Calculation and Displayment functions of virtual
double ResidentialProperty::CalculateMaintanceCost()
{
	return(getPropertyValue() * 0.01);
}
void ResidentialProperty::printPropertyDetails()
{
	cout << "Residential Property Details:\n";
	cout << "Property ID: " << getPropertyId() << "\n";
	cout << "Property Name: " << getPropertyName() << "\n";
	cout << "Property Value: " << getPropertyValue() << "\n";
	cout << "Property of Residential tax: " << calculatePropertyValueAfterTax() << endl;
	cout << "Property of Residential Maintance cost: " << CalculateMaintanceCost() << endl;
}