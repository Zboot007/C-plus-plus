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
//cheking error
void Property::setPropertyId(int id) {
    try {
        if (id < 0)
        {
            throw InvalidPropertyException();
        }
        else
            propertyId = id;
    }
    catch (InvalidPropertyException e)
    {
        cout << e.what() << endl;
    }
}
void Property::setPropertyName(const string& name) {
    propertyName = name;
}
//cheking error
void Property::setPropertyValue(double value) {
    try {
        if (value <= 0)
        {
            throw exception("Exception caught: Invalid Property Value");
        }
        else
            propertyValue = value;
    }
    catch (exception a) {
        cout << a.what() << endl;
    }
}

