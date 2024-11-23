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
int main()
{
    // Create objects of ResidentialProperty and CommercialProperty classes
    ResidentialProperty residential(1, "Luxury", 1000.0);
    ComercialProperty commercial(1, "Flex", 1000.0);
    // Display property details
    Property* ptr;
    char a;
    cout << "Please input R or r to see details of Residential either input C or c to see Commercial properties: ";
    cin >> a;
    if (a == 'R' || a == 'r')
    {
        ptr = &residential;
        ptr->printPropertyDetails();
    }
    if (a == 'C' || a == 'c')
    {
        ptr = &commercial;
        ptr->printPropertyDetails();
    }
    else
        cout << "Wrong input" << endl;
    return main();
}
