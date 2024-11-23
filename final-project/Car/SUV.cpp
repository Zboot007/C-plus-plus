#include <string>
#include <iostream>
#include<iomanip>
#include"SUV.h"
#include<stdexcept>
#include<exception>
//set methods
void SUV::setCargoSpace(std::string space)
{
	try
	{
		if (space == "0")
		{
			throw std::exception("Invalid Error: Cargo space is not properly answered!");
		}
		else
			cargoSpace = space;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
void SUV::setRuggedness(int rug)
{
	try 
	{
		if (rug < 0 || rug > 6)
		{
			 throw std::exception("Invalid Error: Ruggedness shoud be evaluated from 1 to 5!");
		}
		else
			Ruggedness = rug;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
//constructors
SUV::SUV()
{
	cargoSpace = "big";
	Ruggedness = 5;
}
SUV::SUV(std::string space, int rug)
{
	cargoSpace = space;
	Ruggedness = rug;
}
//destructor
SUV::~SUV()
{}
//get methods
std::string SUV::getCargoSpace() const
{
	return cargoSpace;
}
int SUV::getRuggedness() const
{
	return Ruggedness;
}