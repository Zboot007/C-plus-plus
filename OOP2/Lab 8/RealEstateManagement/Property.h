#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>
#include<iostream>
using namespace std;
class Property {
private:
    int propertyId;
    std::string propertyName;
    double propertyValue;
public: 
    // Constructors
    Property();
    Property(int id, std::string name, double value);

    // Destructor
    ~Property();

    // Getter methods
    int getPropertyId() const;
    std::string getPropertyName() const;
    double getPropertyValue() const;
    

    // Setter methods
    void setPropertyId(int id);
    void setPropertyName(const std::string& name);
    void setPropertyValue(double value);

    
    void PrintPropertyDetails()
    {
        cout << "Property ID: " << getPropertyId() << endl;
        cout << "Property Name: " << getPropertyName() << endl;
        cout << "Property Value: " << getPropertyValue() << endl;
    }
    //calculate virtual Tax function
    //virtual double calculatePropertyValueAfterTax();
    //virtual double CalculateMaintanceCost() = 0;
    //virtual void printPropertyDetails() = 0;
};

#endif // PROPERTY_H