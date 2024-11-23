#include <string>
#include <iostream>
#include<iomanip>
#include"Sedan.h"
#include<stdexcept>
#include<exception>

// constructors and destructor
Sedan::Sedan()
{
	passangerCapacity = 4;
	Size = "3.5 meters";
	transmissionType = "Automatic";
}
Sedan::Sedan(int passanger_capacity, std::string size, std::string transmission_type)
{
	passangerCapacity = passanger_capacity;
	Size = size;
	transmissionType = transmission_type;
}
Sedan::~Sedan(){}

//getter methods
int Sedan::getPassangerCapacity() const
{
	return passangerCapacity;
}
std::string Sedan::getSize() const
{
	return Size;
}
std::string Sedan::getTransmissionType() const
{
	return transmissionType;
}
//setter methods
void Sedan::setPassangerCapacity(int passanger_capacity)
{
	try {
		if (passanger_capacity < 2 || passanger_capacity > 4)
			throw std::exception("Invalid Error: Passanger capacity cannot be more than 4 or less than 2!");
		else
			passangerCapacity = passanger_capacity;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
void Sedan::setSize(std::string size)
{
	try {
		
		if (size == "1" || size == "6")
			throw std::exception("Invalid Error: Size of sedan cannot be less than 2 and more than 5!");
		else if(size == "2" || size == "3" || size == "4" || size == "5")
		{
			std::string A, B, C, D;
			A = "2meters."; B = "3meters."; C = "4meters.", D = "5meters.";
			if (size == "2")
			{				Size = A;			}//additional changes in input
			else if (size == "3")
			{				Size = B;			}
			else if (size == "4")
			{				Size = C;			}
			else if (size == "5")
			{				Size = D;			}
			else
				Size = size;
		}
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
void Sedan::setTransmissionType(std::string transmission_type)
{
	try {
		if (transmission_type == "none")
		{
			throw std::exception("Invalid Error: Transmission type should be wether manual or automatic!");
		}
		else if(transmission_type == "manual" || transmission_type == "automatic")
			transmissionType = transmission_type;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}