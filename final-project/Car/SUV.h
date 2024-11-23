#ifndef SUV_H
#define SUV_H
#include <string>
#include <iostream>
#include<iomanip>
#include<exception>
#include"Car.h"
#include<stdexcept>
class SUV : public Car {
private:
	std::string cargoSpace; //big or small or medium
	int Ruggedness; // from 1 to 5 прочность
public:
	//set methods
	void setCargoSpace(std::string space);
	void setRuggedness(int rug);
	SUV();
	SUV(std::string space, int rug);
	~SUV();
	//get methods
	std::string getCargoSpace() const;
	int getRuggedness() const;

	//Serialize
	void serialize_SUV(std::ofstream& app) const {
		app << ' ' << getCargoSpace() << ' ' << getRuggedness() << std::endl;
	}
	//Desirialize 
	void deserialize_SUV(std::ifstream& in) {
		in >> cargoSpace >> Ruggedness;
	}
};
#endif