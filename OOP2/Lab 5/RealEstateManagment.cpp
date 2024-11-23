/*
ID: U2310118
Full Name: Jamoliddinov Muhamadazimhon
Date: 3/6/2024
Time: 5.24 pm
*/
#include <iostream>
#include "Property.h"
#include "ResidentialProperty.h"
#include "CommercialProperty.h"
using namespace std;
int main() {
    // Create objects of ResidentialProperty and CommercialProperty classes
    ResidentialProperty residential;
    CommercialProperty commercial;

    // Set properties for residential property
    residential.setPropertyId(1);
    residential.setPropertyName("Luxury Villa");
    residential.setPropertyValue(1000000.0);
    residential.setResidanceType("Villa");
    residential.setnumOfBedrooms(4);
    residential.setnumOfBathrooms(3);

    // Set properties for commercial property
    commercial.setPropertyId(2);
    commercial.setPropertyName("Office Complex");
    commercial.setPropertyValue(5000000.0);
    commercial.setBusinessType("Corporate Offices");
    commercial.setNumOfRooms(20);

    // Display property details
    std::cout << "Residential Property Details:\n";
    std::cout << "Property ID: " << residential.getPropertyId() << "\n";
    std::cout << "Property Name: " << residential.getPropertyName() << "\n";
    std::cout << "Property Value: " << residential.getPropertyValue() << "\n";
    std::cout << "Residence Type: " << residential.getResidanceType() << "\n";
    std::cout << "Number of Bedrooms: " << residential.getnumOfBedrooms() << "\n";
    std::cout << "Number of Bathrooms: " << residential.getnumOfBathrooms() << "\n\n";

    std::cout << "Commercial Property Details:\n";
    std::cout << "Property ID: " << commercial.getPropertyId() << "\n";
    std::cout << "Property Name: " << commercial.getPropertyName() << "\n";
    std::cout << "Property Value: " << commercial.getPropertyValue() << "\n";
    std::cout << "Business Type: " << commercial.getBusinessType() << "\n";
    std::cout << "Number of Rooms: " << commercial.getNumOfRooms() << "\n";

    return 0;
}
