#ifndef RESIDENTIALPROPERTY_H
#define RESIDENTIALPROPERTY_H
#include<iostream>
#include"Property.h"
using namespace std;
class ResidentialProperty : public Property //signing parant to child class
{
private:
	//private members
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
	/*void setPropertyId(int id);
	void setPropertyName(const string& name);
	void setPropertyValue(double value);*/
	//constructors
	ResidentialProperty();
	ResidentialProperty(int, string, int);
	//destructor
	~ResidentialProperty();
	//calculate Tax function
	double calculatePropertyValueAfterTax();

	virtual double CalculateMaintanceCost();
	virtual void printPropertyDetails();
};
#endif