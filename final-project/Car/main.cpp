#include <iostream>
#include<string>
#include"Car.h"
#include"SUV.h"
#include"OffRoad.h"
#include"Sedan.h"
#include<iomanip>
#include<stdexcept>
#include<fstream>
#include<exception>
int main()
{
	std::string option;
	std::cout << "Write buy or sell sections: "; std::cin >> option;
	if (option == "buy" || option == "sell" || option == "Buy" || option == "Sell")
	{
		if (option == "sell" || option == "Sell")
		{
			//inputing all datas and infromations
			Car c0;
			int carmileage, tankcapacity, power;
			std::string Class, name, surname, address, carmodel, telephone, data;
			std::cout << "Write your Name: "; std::cin >> name;
			std::cout << "Write your Surname: "; std::cin >> surname;
			std::cout << "Input telephone number (998 (90) XXX XX XX):"; std::cin >> telephone;
			std::cout << "Write your Country: "; std::cin >> address;
			std::cout << "Please input class of car (SUV, OffRoad, Sedan): "; std::cin >> Class;
			std::cout << "Write car model: "; std::cin >> carmodel;
			std::cout << "Write data of car's creation (DD MM YYYY): "; std::cin >> data;
			std::cout << "Input car Mileage (km)(how long was car driven): "; std::cin >> carmileage;
			std::cout << "Input car's tank capacity (liter (from 1 to 100)): "; std::cin >> tankcapacity;
			std::cout << "Input car's horse power: "; std::cin >> power;
			c0.setName(name); c0.setSurname(surname); c0.setTelephoneNumber(telephone); c0.setAddress(address); c0.setCarModel(carmodel);
			c0.setDataOfCreation(data); c0.setCarMileage(carmileage); c0.setTankCapacity(tankcapacity); c0.setHorsePower(power);
			//appending to file only for derived class's file
			if (Class == "SUV" || Class == "suv")
			{
				SUV s1;
				std::string space;
				int rugged;
				std::cout << "Write Cargo Space as big, small or medium: "; std::cin >> space;
				s1.setCargoSpace(space);
				std::cout << "Input Ruggedness from 1 to 5: "; std::cin >> rugged;
				s1.setRuggedness(rugged);
				std::ofstream outfile("SUV.txt", std::ios::app);
				if (outfile.is_open()) 
				{
					c0.serialize_Car(outfile);
					s1.serialize_SUV(outfile);
					outfile.close();
				}

			}
			//appending to a file and serialize
			else if (Class == "OffRoad" || Class == "Offroad")
			{
				Off_Road o1;
				std::string cage, roof;
				std::cout << "Write cage big, small or none: "; std::cin >> cage;
				o1.setCage(cage);
				std::cout << "Write car roof open or closed: "; std::cin >> roof;
				o1.setCarRoof(roof);
				std::ofstream outfile("OffRoad.txt", std::ios::app);
				if (outfile.is_open())
				{
					c0.serialize_Car(outfile);
					o1.serialize_OffRoad(outfile);
					outfile.close();
				}
			}
			//appending and serialize
			else if (Class == "Sedan" || Class == "sedan")
			{
				Sedan e1;
				int passanger_capacity;
				std::string size, transmission_type;
				std::cout << "Input passanger capacity from 2 to 5: "; std::cin >> passanger_capacity;
				e1.setPassangerCapacity(passanger_capacity);
				std::cout << "Write size of a sedan in meters: "; std::cin >> size;
				e1.setSize(size);
				std::cout << "Write car's transmission type manual or automatic: "; std::cin >> transmission_type;
				e1.setTransmissionType(transmission_type);
				std::ofstream outfile("Sedan.txt", std::ios::app);
				if (outfile.is_open())
				{
					c0.serialize_Car(outfile);
					e1.serialize_Sedan(outfile);
					outfile.close();
				}
			}
		}
		//buy option from where we can see all avaiable cars with almost search system
		if (option == "buy" || option == "Buy")
		{
			int num;
			std::string _option;
			std::cout << "Input 1 to choose avaibale cars from classes and input 2 to see all avaiable cars: "; std::cin >> num;
			if (num == 1)
			{
				std::cout << "Write SUV, Sedan or OffRoad to see their avaiable cars: "; std::cin >> _option;
				//search system
				if (_option == "SUV" || _option == "suv")
				{
					std::cout << "Telephone num:" << std::setw(10) << "Name:" << std::setw(12) << "Surname:" << std::setw(12) << "Country:"
					<< std::setw(13) << "Car model:" << std::setw(12) << "Data:" << std::setw(12) << "Mileage:" << std::setw(10) << "Tank:"
					<< std::setw(10) << "Power:" << std::setw(10) << "Cargo:" << std::setw(10) << "Ruggedness" << std::endl;
					std::ifstream infile("SUV.txt", std::ios::in);
					std::string content;
					while (infile >> content) {
						std::cout << content << "      ";
					}
					infile.close();
					std::cout << std::endl;

				}
				else if (_option == "Sedan" || _option == "sedan")
				{
					std::cout << "Telephone num:" << std::setw(10) << "Name:" << std::setw(12) << "Surname:" << std::setw(12)  << "Country:"
					<< std::setw(13) << "Car model:" << std::setw(12) << "Data:" << std::setw(10) << "Mileage:" << std::setw(6) << "Tank:"
					<< std::setw(6) << "Power:" << std::setw(10) << "Passanger capacity : " << std::setw(4) << "Size : " << std::setw(10) 
					<< "Transmission type:" << std::endl;
					std::ifstream infile("Sedan.txt", std::ios::in);
					std::string content;
					while (infile >> content) {
						std::cout << content << "    ";
					}
					infile.close();
					std::cout << std::endl;
				}
				else if (_option == "OffRoad" || _option == "Offroad")
				{
					std::cout << "Telephone num:" << std::setw(10) << "Name:" << std::setw(10) << "Surname:" << std::setw(12) << "Country:"
					<< std::setw(12) << "Car model:" << std::setw(14) << "Data:" << std::setw(14) << "Mileage:" << std::setw(14) << "Tank:"
					<< std::setw(12) << "Power:" << std::setw(12) << "Cage:" << std::setw(10) << "Car roof:" << std::endl;
					std::ifstream infile("OffRoad.txt", std::ios::in);
					std::string content;
					while (infile >> content)
					{
						std::cout << content << "     ";
						if (content == "\n")
						{
							std::cout << std::endl;
						}
					}
					infile.close();
					std::cout << std::endl;
				}
				else
				{
					std::cout << "Wrong input, please try again!" << std::endl;
				}
			}
			//all avaiable cars information
			else if (num == 2)
			{
				int a = 1;
				std::cout << "Name:" << std::setw(16) << "Surname:" << std::setw(16) << "Telephone num:" << std::setw(16) << "Country:"
				<< std::setw(16) << "Car model:" << std::setw(16) << "Data:" << std::setw(16) << "Mileage:" << std::setw(16) << "Tank capacity:"
				<< std::setw(16) << "Horse power:" << std::setw(16) << "etc." << std::endl;
				//revealing all infromation from file
				std::ifstream infile("SUV.txt", std::ios::in);
				std::string content;
				if (a == 1)
				{
					while (infile >> content)
					{
						std::cout << content << "        ";
					}
					infile.close();
				}
				std::cout << std::endl;
				if (a == 1) 
				{
					std::ifstream infile("Sedan.txt", std::ios::in);
					while (infile >> content)
					{
						std::cout << content << "        ";
					}

					infile.close();
				}
				std::cout << std::endl;
				if (a == 1)
				{
					std::ifstream infile("OffRoad.txt", std::ios::in);
					while (infile >> content)
					{
						std::cout << content << "        ";
					}
					infile.close();
				}
				std::cout << std::endl;
			}
			else
			{
				std::cout << "Please try again!" << std::endl;
			}
		}
	}
	else
		std::cout << std::endl << "Please try again!" << std::endl;
	system("pause");
	return main();
}