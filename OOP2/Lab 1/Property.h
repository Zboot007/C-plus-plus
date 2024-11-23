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
public:
	int getPropertyId();
	void setPropertyId(int pid); 
	string getPropertyName(); 
	void setPropertyName(string pna);
	string getPropertyType();
	void setPropertyType(string pty);
	int getPropertyValue();
	void setPropertyValue(int pv);
};
#endif