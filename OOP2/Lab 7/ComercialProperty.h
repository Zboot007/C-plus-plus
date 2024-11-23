#ifndef COMERCIALPROPERTY_H
#define COMERCIALPROPERTY_H
#include<iostream>
#include<string>
#include"Property.h"
class ComercialProperty : public Property
{
private:
	std::string businessType;
	int numOfRooms;
public:
	//getter methods
	std::string getBusinessType() const;
	int getnumOfRooms() const;
	//setter methods
	void setBusinessType(std::string businesstype);
	void setnumOfRooms(int numofrooms);
	//constructor
	ComercialProperty();
	ComercialProperty(std::string, int);
	//destructir
	~ComercialProperty();
	//calculate Tax function
	double calculatePropertyValueAfterTax();
};
#endif
