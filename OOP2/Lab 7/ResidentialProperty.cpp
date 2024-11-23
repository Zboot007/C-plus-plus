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
ResidentialProperty::ResidentialProperty(int bath, int bed, string tp)
{
	numOfBedrooms = bed;
	numOfBathrooms = bath;
	ResidanceType = tp;
};
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