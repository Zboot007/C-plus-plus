/*
ID: U2310118
Full Name: Jamoliddinov Muhamadazimhon
Date: 3/6/2024
Time: 5.24 pm
*/
#include <iostream>
#include "Property.h"
#include "Owner.h"

int main() {
    // Creating Owner objects
    Owner owner1(1, "Abhijit");
    Owner owner2(2, "John");

    // Creating Property objects
    Property property1(1001, "Luxury Villa", "Residential", 500000, "Address of property", 5, 5, owner1);
    Property property2(1002, "Apartment", "Residential", 70000, "Address of property", 5, 5, owner2);

    // Testing operator overloading
    if (property1 == property2) {
        std::cout << "The properties have the same ID." << std::endl;
    }
    else {
        std::cout << "The properties have different IDs." << std::endl;
    }

    std::cout << "property id = " << property1.getPropertyId() << std::endl;
    std::cout << "property value= " << property1.getPropertyValue() << std::endl;

    // increase property value by 100
    +property1;
    std::cout << "property id = " << property1.getPropertyId() << std::endl;
    std::cout << "property value= " << property1.getPropertyValue() << std::endl;



    // decrease property price by 100

    -property1;
    std::cout << "property id = " << property1.getPropertyId() << std::endl;
    std::cout << "property value= " << property1.getPropertyValue() << std::endl;

    system("pause");
    return 0;
}