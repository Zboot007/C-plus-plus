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
	int BusinessId;
public:
	//getter methods
	std::string getBusinessType() const;
	int getnumOfRooms() const;
	int getBusinessId() const;
	//setter methods
	void setBusinessId(int pid);
	void setBusinessType(std::string businesstype);
	void setnumOfRooms(int numofrooms);
	//constructor
	ComercialProperty();
	ComercialProperty(int, std::string, int);
	//destructir
	~ComercialProperty();
	//calculate virtual Tax function
	double calculatePropertyValueAfterTax();

    double CalculateMaintanceCost();
	void printPropertyDetails();
};
#endif
