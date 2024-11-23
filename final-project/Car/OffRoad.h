#ifndef OFFROAD_H
#define OFFROAD_H
#include <string>
#include <iostream>
#include<iomanip>
#include<stdexcept>
#include<exception>
#include"Car.h"
class Off_Road : public Car {
private:
	std::string Cage; // Big or Small or None
	std::string carRoof; // open or closed roof
public:
	//setter methods
	void setCage(std::string cage);
	void setCarRoof(std::string roof);
	
	//getter methods
	std::string getCage() const;
	std::string getCarRoof() const;

	//constructor and destructor
	Off_Road();
	Off_Road(std::string cage, std::string roof);
	~Off_Road();

	//Serialize
	void serialize_OffRoad(std::ofstream& app) const {
		app << ' ' << getCage() << ' ' << getCarRoof() << std::endl;
	}
	//Desirialize 
	void deserialize_OffRoad(std::ifstream& in) {
		in >> Cage >> carRoof;
	}
};
#endif