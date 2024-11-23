/*
ID: U2310118
Full Name: Jamoliddinov Muhamadazimhon
Date: 3/6/2024
Time: 5.24 pm
*/
#include <iostream>
#include<string>
#include "Property.h"
#include "ResidentialProperty.h"
#include"ComercialProperty.h"
using namespace std;
int main() {
    // Create objects of ResidentialProperty and CommercialProperty classes
    ResidentialProperty residential;
    ComercialProperty commercial;
    Property *calculate;
    char a;
    // Display property details
    cout << "Enter 'R' to see residential details and 'C' to see commercial"; cin >> a;
    if (a == 'R')
    {
        calculate = &residential;
        std::cout << "Residential Property Details:\n";
        std::cout << "Property ID: " << calculate->getPropertyId() << "\n";
        std::cout << "Property Name: " << calculate->getPropertyName() << "\n";
        std::cout << "Property Value: " << calculate->getPropertyValue() << "\n";
        cout << "Property of Residential tax: " << calculate->calculatePropertyValueAfterTax() << endl;
    }
    if (a == 'C')
    {
        calculate = &commercial;
        std::cout << "Commercial Property Details:\n";
        std::cout << "Property ID: " << calculate->getPropertyId() << "\n";
        std::cout << "Property Name: " << calculate->getPropertyName() << "\n";
        std::cout << "Property Value: " << calculate->getPropertyValue() << "\n";
        cout << "Property of Commercial tax: " << commercial.calculatePropertyValueAfterTax() << endl;
    }
    else
        cout << "Wrong input" << endl;
    return 0;
}
