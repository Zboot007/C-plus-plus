#include <string>
#include <iostream>
#include<iomanip>
#include"OffRoad.h"

//setter methods
void Off_Road::setCage(std::string cage)
{
	try {
		if (cage == "nothing")
		{
			throw std::exception("Invalid Error: Cage section should be answered properly (big, small or none)!");
		}
		else if(cage == "big" || cage == "small" || cage == "none")
		{
			std::string A, B, C;
			A = "Big"; B = "Small"; C = "None";
			if (cage == "big")
			{
				Cage = A;
			}
			else if (cage == "small")
			{				Cage = B;			}
			else if (cage == "none")
			{				Cage = C;			}
			else 
			{				Cage = cage;		}
		}
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
void Off_Road::setCarRoof(std::string roof)
{
	try {
		if (roof == "none")
		{
			throw std::exception("Invalid Error: Roof section should be answered properly (open or closed)!");
		}
		else if(roof == "open" || roof == "closed")
		{			carRoof = roof;		}
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}

//getter methods
std::string Off_Road::getCage() const
{
	return Cage;
}
std::string Off_Road::getCarRoof() const 
{
	return carRoof;
}

//constructor and destructor
Off_Road::Off_Road()
{
	Cage = "None";
	carRoof = "Closed";
}
Off_Road::Off_Road(std::string cage, std::string roof)
{
	Cage = cage;
	carRoof = roof;
}
Off_Road::~Off_Road(){}