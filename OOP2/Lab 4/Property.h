#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>
#include "Owner.h" // Include the Owner class header file

class Property {
private:
    int propertyId;
    std::string propertyName;
    std::string propertyType;
    double propertyValue;
    std::string propertyAddress;
    int numberOfBedrooms;
    int numberOfBathrooms;
    Owner owner; // Instance of Owner class

    static int totalProperties; // Static data member

public:
    // Constructors
    Property();
    Property(int id, const std::string& name, const std::string& type, double value,
        const std::string& address, int bedrooms, int bathrooms, const Owner& owner);

    // Destructor
    ~Property();

    // Getter methods
    int getPropertyId() const;
    std::string getPropertyName() const;
    std::string getPropertyType() const;
    double getPropertyValue() const;
    std::string getPropertyAddress() const;
    int getNumberOfBedrooms() const;
    int getNumberOfBathrooms() const;
    Owner getOwner() const;

    // Setter methods
    void setPropertyId(int id);
    void setPropertyName(const std::string& name);
    void setPropertyType(const std::string& type);
    void setPropertyValue(double value);
    void setPropertyAddress(const std::string& address);
    void setNumberOfBedrooms(int bedrooms);
    void setNumberOfBathrooms(int bathrooms);
    void setOwner(const Owner& owner);

    // Static method
    static int getTotalProperties();

    // Utility function
    double calculatePropertyTax() const;
    //Member Function
    friend bool operator == (Property p1, Property p2);
    void operator+();
    void operator-();
};

#endif // PROPERTY_H
