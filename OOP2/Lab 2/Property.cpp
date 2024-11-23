#include"Property.h"
void Property::setPropertyId(int pid)
{
	if (pid > 0)
		propertyId= pid;
	else
		cout << "Wrong id";
}
int Property::getPropertyId()
{
	return propertyId;
}
void Property::setPropertyName(string pn)
{
	if (pn != " ")
		 propertyName= pn;
	else
		cout << "Invalid name";
}
string Property::getPropertyName()
{
	return propertyName;
}
void Property::setPropertyType(string pt)
{
	if (pt == "comercial")
	{
		pt = "comercial";
		cout << pt;
	}
	else if (pt == "residential")
	{
		pt = "residential";
		cout << pt;
	}
	else
		cout << " must be either commercial or residential";
		
}
string Property::getPropertyType()
{
	return propertyType;
}
void Property::setPropertyValue(int pv)
{
	if (pv > 0)
		propertyValue = pv;
}
int Property::getPropertyValue()
{
	return propertyValue;
}
void Property::setPropertyAddress(string gpa)
{
	propertyAddress = gpa;
}
string Property::getPropertyAddress()
{
	return propertyAddress;
}
void Property::setnumberOfBedrooms(int bed)
{
	if (bed > 0)
	{
		numberOfBedrooms = bed;
	}
	else
		cout << "Wrong number of bedrooms" << endl;
}
int Property::getnumberOfBedrooms()
{
	return numberOfBedrooms;
}
void Property::setnumberOfBathrooms(int bath)
{
	if (bath > 0)
	{
		numberOfBathrooms = bath;
	}
	else
		cout << "Wrong number of bathrooms" << endl;
}
int Property::getnumberOfBathrooms()
{
	return numberOfBathrooms;
}
float Property::getcalculatePropertyTax(float cpt)
{

	return (propertyValue*0.1);
}
Property::Property()
{
	propertyId = 23010118;
	propertyName = "Muhammadazimhon";
	propertyType = "residential";
	propertyValue = 2000;
	propertyAddress = "Tashkent";
	numberOfBedrooms = 5;
	numberOfBathrooms = 2;
	calculatePropertyTax = 2000*0.1;
}