#ifndef PROPERTY_H
#define PROPERTY_H

#include <string> s
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
   
};

#endif // PROPERTY_H
