/*
Full Name: Jamoliddinov Muhammadazimhon
ID:u2310118
Date:20.03.2024
*/
#include <iostream>
#include <string>
using namespace std;

//class Property {
//private:
//    int any;
//    int propertyId;
//    std::string propertyName;
//    std::string propertyType;
//    double propertyValue;
//public:
//    // binary operations
//    friend Property operator +(Property& p1);
//    friend Property operator -(Property& p1);
//    // input and output
//    friend istream & operator >>(istream & in, Property& p2);
//    friend ostream & operator <<(ostream & os, Property& p2);
//    // Constructors
//    Property();
//    Property(int id, std::string name, std::string type, double value);
//
//    // Destructor
//    ~Property();
//
//    // Getter methods
//    int getPropertyId() const;
//    std::string getPropertyName() const;
//    double getPropertyValue() const;
//    std::string getPropertyType() const;
//
//    // Setter methods
//    void setPropertyId(int id);
//    void setPropertyName(const std::string& name);
//    void setPropertyValue(double value);
//    void setPropertyType(std::string type);
//
//};
//Property::Property()
//{
//    propertyId = 1;
//    propertyName = "xleb";
//    propertyType = "Lux";
//    propertyValue = 100;
//}
//
//Property::Property(int id, string name, string type, double value)
//{
//    propertyId = id;
//    propertyName = name;
//    propertyType = type;
//    propertyValue = value;
//
//}
//
//// Destructor
//Property::~Property()
//{
//    cout << "Destructor of Property." << endl;
//}
//
//// Getter methods
//int Property::getPropertyId() const {
//    return propertyId;
//}
//string Property::getPropertyName() const {
//    return propertyName;
//}
//double Property::getPropertyValue() const {
//    return propertyValue;
//}
//string Property::getPropertyType() const {
//    return propertyType;
//}
//
//// Setter methods
//void Property::setPropertyId(int id) {
//    propertyId = id;
//}
//void Property::setPropertyName(const string& name) {
//    propertyName = name;
//}
//void Property::setPropertyValue(double value) {
//    propertyValue = value;
//}
//void Property::setPropertyType(string type) {
//    propertyType = type;
//}
////Operators function
//    Property operator +(Property & p1, Property & p2) {
//    Property temp;
//    temp.propertyValue = p1.propertyValue + p2.propertyValue;
//    temp.propertyName = p1.propertyName;
//    temp.propertyType = p1.propertyType;
//    temp.propertyId = p1.propertyId;
//    return temp;
//}
//   
//    Property operator -(Property & p1, Property & p2) {
//    Property temp;
//    temp.propertyValue = p1.propertyValue - p2.propertyValue;
//    temp.propertyName = p2.propertyName;
//    temp.propertyType = p2.propertyType;
//    temp.propertyId = p2.propertyId;
//    return temp;
//}
//
//istream& operator >>(istream& in, Property& p1) {
//    in >> p1.propertyId;
//    in >> p1.propertyName;
//    in >> p1.propertyType;
//    in >> p1.propertyValue;
//    return in;
//}
//ostream& operator <<(ostream& out, Property& p1) {
//    out << p1.propertyId << endl;
//    out << p1.propertyName << endl;
//    out << p1.propertyType << endl;
//    out << p1.propertyValue << endl;
//    return out;
//}
//int main() {
//
//    // Creating Property objects
//    Property property1(1001, "Luxury Villa", "Residential", 15000);
//    Property property2(1002, "Apartment", "Residential", 7000);
//
//    // Testing binary operator overloading (addition)
//    Property property3 = property1 + property2;
//    std::cout << "After addition:" << std::endl;
//    std::cout << property3 << std::endl;
//
//    // Testing binary operator overloading (subtraction)
//    Property property4 = property1 - property2;
//    std::cout << "After subtraction:" << std::endl;
//    std::cout << property4 << std::endl;
//
//    // Testing stream extraction operator overloading
//    std::cout << "Enter details for a new property:" << std::endl;
//    Property property5;
//    std::cin >> property5;
//    std::cout << "New Property details:" << std::endl;
//    std::cout << property5 << std::endl;
//
//    return 0;
//}
