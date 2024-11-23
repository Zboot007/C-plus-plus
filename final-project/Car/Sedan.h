#ifndef SEDAN_H
#define SEDAN_H
#include <string>
#include <iostream>
#include<iomanip>
#include<exception>
#include"Car.h"
#include<stdexcept>

class Sedan : public Car {
private:
	//data members
	int passangerCapacity; //from 2 to 4
	std::string Size; //3 metres
	std::string transmissionType; // manual or automatic
public:
	// constructors and destructor
	Sedan();
	Sedan(int passanger_capacity, std::string size, std::string transmission_type);
	~Sedan();

	//getter methods
	int getPassangerCapacity() const;
	std::string getSize() const;
	std::string getTransmissionType() const;

	//setter methods
	void setPassangerCapacity(int passanger_capacity);
	void setSize(std::string size);
	void setTransmissionType(std::string transmission_type);

	//Serialize
	void serialize_Sedan(std::ofstream& app) const {
		app << ' ' << getPassangerCapacity() << ' ' << getSize() << ' ' << getTransmissionType() << std::endl;
	}
	//Desirialize 
	void deserialize_Sedan(std::ifstream& in) {
		in >> passangerCapacity >> Size >> transmissionType;
	}
};
#endif