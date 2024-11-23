/*
ID: U2310118
Full Name: Jamoliddinov Muhamadazimhon
Date: 1/05/2024
Time: 5.00 pm
*/
#include <iostream>
#include<string>
#include "Property.h"
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
    /*const int max_property = 3;
    Property properties[max_property] = { Property(100, "Astro", 1000), Property(101, "Algor", 2000), Property(102, "Sabor", 3000) };
    int propertycount = 0;*/
    //std::ofstream outfile("property.txt", std::ios::out);
    //if (outfile.is_open()) {
    //    for (int i = 0; i < max_property; i++) {
    //        properties[i].serialize(outfile);
    //    }
    //    outfile.close();
    //}
    const int max_prop = 3;
    Property properties[max_prop];
    int propertycount = 0;
    std::ifstream infile("property.txt", std::ios::in);
    if (infile.is_open()) {
        while (!infile.eof() && propertycount < max_prop) {
            Property temp;
            temp.deserialize(infile);
            // Check to ensure the read operation was successful
            if (infile) {
                properties[propertycount++] = temp;
                cout << "Read successfully!" << endl;
            }
        }
        infile.close();
    }
    else 
       std::cout << "Failed to open file for reading." << std::endl;

    // Output the data read from file
    for (int i = 0; i < propertycount; i++) {
        std::cout << setw(12)<< "Property ID: " << properties[i].getPropertyId() <<setw(12)<< ", Property name: " << properties[i].getPropertyName()<<", Property value: " << setw(12) <<properties[i].getPropertyValue() << std::endl;
    }

    system("pause");
    return 0;
}