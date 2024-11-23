#include "Property.h"

// Initialize static data member
int Property::totalProperties = 0;

// Constructors
Property::Property()
    : propertyId(0), propertyName(""), propertyType(""), propertyValue(0.0),
    propertyAddress(""), numberOfBedrooms(0), numberOfBathrooms(0), owner() {
    totalProperties++; // Increment totalProperties on object creation
}

Property::Property(int id, const std::string& name, const std::string& type, double value,
    const std::string& address, int bedrooms, int bathrooms, const Owner& owner)
    : propertyId(id), propertyName(name), propertyType(type), propertyValue(value),
    propertyAddress(address), numberOfBedrooms(bedrooms), numberOfBathrooms(bathrooms), owner(owner) {
    totalProperties++; // Increment totalProperties on object creation
}

// Destructor
Property::~Property() {
    totalProperties--; // Decrement totalProperties on object destruction
}

// Getter methods
int Property::getPropertyId() const {
    return propertyId;
}

std::string Property::getPropertyName() const {
    return propertyName;
}

std::string Property::getPropertyType() const {
    return propertyType;
}

double Property::getPropertyValue() const {
    return propertyValue;
}

std::string Property::getPropertyAddress() const {
    return propertyAddress;
}

int Property::getNumberOfBedrooms() const {
    return numberOfBedrooms;
}

int Property::getNumberOfBathrooms() const {
    return numberOfBathrooms;
}

Owner Property::getOwner() const {
    return owner;
}

// Setter methods
void Property::setPropertyId(int id) {
    propertyId = id;
}

void Property::setPropertyName(const std::string& name) {
    propertyName = name;
}

void Property::setPropertyType(const std::string& type) {
    propertyType = type;
}

void Property::setPropertyValue(double value) {
    propertyValue = value;
}

void Property::setPropertyAddress(const std::string& address) {
    propertyAddress = address;
}

void Property::setNumberOfBedrooms(int bedrooms) {
    numberOfBedrooms = bedrooms;
}

void Property::setNumberOfBathrooms(int bathrooms) {
    numberOfBathrooms = bathrooms;
}

void Property::setOwner(const Owner& owner) {
    this->owner = owner;
}

// Static method
int Property::getTotalProperties() {
    return totalProperties;
}

// Utility function
double Property::calculatePropertyTax() const {
    // Assuming property tax rate is 10%
    return 0.10 * propertyValue;
}
//Member function
bool operator == (Property p1, Property p2)
{
	return (p1.getPropertyValue() == p2.getPropertyValue());
}
void Property::operator +()
{
	propertyValue = propertyValue + 100;
}
void Property::operator -()
{
    propertyValue = propertyValue - 100;
}