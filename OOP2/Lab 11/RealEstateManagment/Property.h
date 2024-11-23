#ifndef PROPERTY_H
#define PROPERTY_H

#include<iomanip>
#include<fstream>
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


    //void serialize(std::ofstream& out) const {
    //    out << "Property ID : " << propertyId << '\n' << "Property Name : " << propertyName << '\n' << "Property Value : " << propertyValue << '\n';
    //}
    //void deserialize(std::ifstream& in) {
    //    in >> propertyId >> propertyName >> propertyValue;
    //}

};
//ading new class to get own error
class InvalidPropertyException : public exception {
private:
    string str;
public:
    InvalidPropertyException() : str(" Invalid property ID") {  };
    InvalidPropertyException(string p) :str(p) {};
    virtual const char* what() const {
        return str.c_str();
    }
};

#endif // PROPERTY_H