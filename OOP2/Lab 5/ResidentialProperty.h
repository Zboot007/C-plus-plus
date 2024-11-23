#ifndef RESIDENTIALPROPERTY_H
#define RESIDENTIALPROPERTY_H
#include<iostream>
#include"ResidentialProperty.cpp"
#include"Property.h"
class ResidentialProperty : public Property
{
private:
	int numOfBathrooms;
	int numOfBedrooms;
	string ResidanceType;
public:
	//getter and setter member functions
	int getnumOfBathrooms() const;
	void setnumOfBathrooms(int bath);
	int getnumOfBedrooms() const;
	void setnumOfBedrooms(int bed);
	string getResidanceType() const;
	void setResidanceType(string tp);
	void setPropertyId(int id);
	void setPropertyName(const string& name);
	void setPropertyValue(double value);
	//constructors
	ResidentialProperty();
	ResidentialProperty(int bath, int bed, string tp);
	//destructor
	~ResidentialProperty();
};
#endif