#include"Car.h"
#include<iostream>
#include<string>
#include<iomanip>

//Default constructor
Car::Car()
{
	tankCapacity = 35;
	carMileage = 15; //in km
	carModel = "Unknown";
	telephoneNumber = "+998(90) 444-33-33";
	Name = "Ulug'bek";
	Surname = "Beshimov";
	dataOfcreation = "1/05/2024";
	Address = "Tashkent";
	horsePower = 300;
}
//Parametrized constructor
Car::Car(std::string carmodel, int carmileage, int tankcapacity, std::string telephone, std::string name, std::string surname, std::string data, std::string address, int power)
{
	carModel = carmodel;
	carMileage = carmileage;
	tankCapacity = tankcapacity;
	telephoneNumber = telephone;
	Name = name;
	Surname = surname;
	dataOfcreation = data;
	Address = address;
	horsePower = power;
}
//Destructor
Car::~Car()
{}
//setter methods
void Car::setCarMileage(int carmileage)
{
	try
	{
		if (carmileage <= 0)
		{
			throw std::exception("Invalid Error: Car's mileage cannot be 0 or less!");
		}
		else
		{			carMileage = carmileage;		}
	}
	catch(std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
void Car::setCarModel(std::string carmodel)
{
		carModel = carmodel;
}
void Car::setTankCapacity(int tankcapacity)
{
	try
	{
		if (tankcapacity <= 0)
		{
			throw std::exception("Invalid Error: Car's tank capacity cannot be 0 or less!");
		}
		else
		{
			tankCapacity = tankcapacity;
		}
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
void Car::setTelephoneNumber(std::string telephone)
{
	try
	{
		if (telephone == "0")
		{
			throw std::exception("Invalid Error: Telephone number shoul be inputed correctly");
		}
		else
		{
			telephoneNumber = telephone;
		}
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
void Car::setName(std::string name)
{
	Name = name;
}
void Car::setSurname(std::string surname)
{
	Surname = surname;
}
void Car::setDataOfCreation(std::string data)
{
	try
	{
		if (data == "0")
		{
			throw std::exception("Invalid Error: Data of creation is not correct (shoul be: XX XX XXXX)!");
		}
		else
		{
			dataOfcreation = data;
		}
	}
	catch (std::exception e)
	{
		std::cout << e.what();
	}
}
void Car::setAddress(std::string address)
{
	Address = address;
}
void Car::setHorsePower(int power)
{
	try
	{
		if (power <= 0)
		{
			throw std::exception("Invalid Error: Car's horse power cannot be 0 or less!");
		}
		else
		{
			horsePower = power;
		}
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
//getter methods
std::string Car::getCarModel() const
{
	return (carModel);
}
int Car::getCarMileage() const
{
	return (carMileage);
}
int Car::getTankCapacity() const
{
	return (tankCapacity);
}
std::string Car::getTelephoneNumber() const
{
	return (telephoneNumber);
}
std::string Car::getName() const
{
	return(Name);
}
std::string Car::getSurname() const
{
	return (Surname);
}
std::string Car::getDataOfCreation() const
{
	return (dataOfcreation);
}
std::string Car::getAddress() const
{
	return (Address);
}
int Car::getHorsePower() const
{
	return(horsePower);
}