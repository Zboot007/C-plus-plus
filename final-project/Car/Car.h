#ifndef CAR_H
#define CAR_H
#include<fstream>
#include <string>
#include <iostream>
#include<iomanip>
#include<exception>
#include<stdexcept>
class Car {
private:
	std::string carModel; // Model of car
	int carMileage; // how long was it driven
	int tankCapacity; // integer (litr of car where is fuel)
	std::string telephoneNumber; //+998 (90) 444-33-33
	std::string Name;
	std::string Surname;
	std::string dataOfcreation; // it shhould be like "DD/MM/YYYY" with / using getline
	std::string Address;
	int horsePower;
public:

	//Default constructor
	Car();
	//Parametrized constructor
	Car(std::string carmodel, int carmileage, int tankcapacity, std::string telephone, std::string name, std::string surname, std::string data, std::string address, int power);
	//Destructor
	~Car();
	//setter Methods below
	void setCarMileage(int carmileage);
	void setCarModel(std::string carmodel);
	void setTankCapacity(int tankcapacity);
	void setTelephoneNumber(std::string telephone);
	void setName(std::string name);
	void setSurname(std::string surname);
	void setDataOfCreation(std::string data);
	void setAddress(std::string address);
	void setHorsePower(int power);

	//getter methods below
	std::string getCarModel() const;
	int getCarMileage() const;
	int getTankCapacity() const;
	std::string getTelephoneNumber() const;
	std::string getName() const;
	std::string getSurname() const;
	std::string getDataOfCreation() const;
	std::string getAddress() const;
	int getHorsePower() const;

	//Serialize
	void serialize_Car(std::ofstream& app) const {
		app << getTelephoneNumber() << ' ' << getName() << ' ' << getSurname() << ' ' << getAddress() << ' ' << getCarModel() << ' ' << getDataOfCreation() << ' ' << getCarMileage() << ' ' << getTankCapacity() << ' ' << getHorsePower() << std::endl;
	}
	//Desirialize 
	void deserialize_Car(std::ifstream& in) {
		in >> telephoneNumber >> Name >> Surname >> Address >> carModel >> dataOfcreation >> carMileage >> tankCapacity >> horsePower;
	}
};
#endif