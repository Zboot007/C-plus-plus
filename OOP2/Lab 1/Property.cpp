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
		pt = "comercial";
	else if (pt == "residential")
		pt = "residential";
	else
		cout << " must be either commercial or residential the ";
		
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