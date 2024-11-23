#ifndef OWNER_H
#define OWNER_H

#include <string>

class Owner {
private:
    int ownerID;
    std::string ownerName;

public:
    // Constructors
    Owner();
    Owner(int id, const std::string& name);

    // Getter methods
    int getOwnerID() const;
    std::string getOwnerName() const;

    // Setter methods
    void setOwnerID(int id);
    void setOwnerName(const std::string& name);
};

#endif // OWNER_H
