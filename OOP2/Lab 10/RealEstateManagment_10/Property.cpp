#include "Property.h"
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
// Constructors
Property::Property()
{
    propertyId = 1;
    propertyValue = 100;
    propertyName = "xleb";

}

Property::Property(int id, string name, double value)
{
    propertyId = id;
    propertyValue = value;
    propertyName = name;

}

// Destructor
Property::~Property()
{}

// Getter methods
int Property::getPropertyId() const {
    return propertyId;
}
string Property::getPropertyName() const {
    return propertyName;
}
double Property::getPropertyValue() const {
    return propertyValue;
}

// Setter methods
void Property::setPropertyId(int id) {
    propertyId = id;
}
void Property::setPropertyName(const string& name) {
    propertyName = name;
}
void Property::setPropertyValue(double value) {
    propertyValue = value;
}

