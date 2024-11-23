#include "Owner.h"
#include"Property.h"
// Constructors
Owner::Owner() : ownerID(0), ownerName("") {}

Owner::Owner(int id, const std::string& name) : ownerID(id), ownerName(name) {}

// Getter methods
int Owner::getOwnerID() const {
    return ownerID;
}

std::string Owner::getOwnerName() const {
    return ownerName;
}

// Setter methods
void Owner::setOwnerID(int id) {
    ownerID = id;
}

void Owner::setOwnerName(const std::string& name) {
    ownerName = name;
}