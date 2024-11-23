#include<iostream>
#include<string>
#include"Property.h"
#include"Owner.h"
using namespace std;
//owner cpp
void Owner::setOwnerID(int wid)
{
	if (wid > 0)
	{
		ownerID = wid;
	}
}
int Owner::getOwnerID() const
{
	return ownerID;
}
void Owner::setOwnerName(string owname)
{
	owname = ownerName;
}
string Owner::getOwnerName() const
{
	return ownerName;
}
//owner h
using namespace std;
class Owner
{
private:
	int ownerID;
	string ownerName;
public:
	int getOwnerID() const;
	void setOwnerID(int wid);
	string getOwnerName() const;
	void setOwnerName(string owname);
	Owner()
	{
		ownerID = 15;
		ownerName = "MuhammadAzimhon";
	}
	Owner(int wid, string owname)
	{
		ownerID = wid;
		ownerName = owname;
	}
	~Owner()
	{
		cout << "I am the owner" << endl;
	}
};
//property cpp
void Property::setPropertyId(int pid)
{
	if (pid > 0)
		propertyId = pid;
	else
		cout << "Wrong id";
}
int Property::getPropertyId() const
{
	return propertyId;
}
void Property::setPropertyName(string pn)
{
	if (pn != " ")
		propertyName = pn;
	else
		cout << "Invalid name";
}
string Property::getPropertyName() const
{
	return propertyName;
}
void Property::setPropertyType(string pt)
{
	if (pt == "comercial")
	{
		pt = "comercial";
		cout << pt;
	}
	else if (pt == "residential")
	{
		pt = "residential";
		cout << pt;
	}
	else
		cout << " must be either commercial or residential";

}
string Property::getPropertyType() const
{
	return propertyType;
}
void Property::setPropertyValue(int pv)
{
	if (pv > 0)
		propertyValue = pv;
}
int Property::getPropertyValue() const
{
	return propertyValue;
}
void Property::setPropertyAddress(string gpa)
{
	propertyAddress = gpa;
}
string Property::getPropertyAddress() const
{
	return propertyAddress;
}
void Property::setnumberOfBedrooms(int bed)
{
	if (bed > 0)
	{
		numberOfBedrooms = bed;
	}
	else
		cout << "Wrong number of bedrooms" << endl;
}
int Property::getnumberOfBedrooms()
{
	return numberOfBedrooms;
}
void Property::setnumberOfBathrooms(int bath)
{
	if (bath > 0)
	{
		numberOfBathrooms = bath;
	}
	else
		cout << "Wrong number of bathrooms" << endl;
}
int Property::getnumberOfBathrooms() const
{
	return numberOfBathrooms;
}
float Property::getcalculatePropertyTax(float cpt) const
{

	return (propertyValue * 0.1);
}
void Property::setOwnerID(int wid)
{
	owner.setOwnerID(wid);
}
int Property::getOwnerID() const
{
	return owner.getOwnerID();
}
void Property::setOwnerName(string owname)
{
	owner.setOwnerName(owname);
}
string Property::getOwnerName() const
{
	return owner.getOwnerName();
}
Property::Property()
{
	propertyId = 23010118;
	propertyName = "Muhammadazimhon";
	propertyType = "residential";
	propertyValue = 2000;
	propertyAddress = "Tashkent";
	numberOfBedrooms = 5;
	numberOfBathrooms = 2;
	calculatePropertyTax = 2000 * 0.1;
	owner = Owner();
}
Property::Property(int pid, string pn, string pt, int pv, string gpa, int bed, int bath, float cpt, Owner Own)
{
	propertyId = pid;
	propertyName = pn;
	propertyType = pt;
	propertyValue = pv;
	propertyAddress = gpa;
	numberOfBedrooms = bed;
	numberOfBathrooms = bath;
	calculatePropertyTax = cpt;
	Owner() = Own;
}
//property h
using namespace std;
class Property
{
private:
	int propertyId;
	string propertyName;
	string propertyType;
	int propertyValue;
	string propertyAddress;
	int numberOfBedrooms;
	int numberOfBathrooms;
	int calculatePropertyTax;
	Owner owner;
public:
	int getPropertyId() const;
	void setPropertyId(int pid);
	string getPropertyName() const;
	void setPropertyName(string pna);
	string getPropertyType() const;
	void setPropertyType(string pty);
	int getPropertyValue() const;
	void setPropertyValue(int pv);
	string getPropertyAddress() const;
	void setPropertyAddress(string gpa);
	int getnumberOfBedrooms();
	void setnumberOfBedrooms(int bed);
	int getnumberOfBathrooms() const;
	void setnumberOfBathrooms(int bath);
	float getcalculatePropertyTax(float cpt) const;
	void setOwnerID(int);
	int getOwnerID() const;
	string getOwnerName() const;
	void setOwnerName(string);
	Property();
	Property(int pid, string pn, string pt, int pv, string gpa, int bed, int bath, float cpt, Owner Owner);
	~Property()
	{
		cout << "I stoled your properties" << endl;
	}
};
//main
int main()
{
	
	string comercial;
	string residential;
	Property p;
	Owner o;
	p.setPropertyId(10);
	cout << "Property id =" << p.getPropertyId() << endl;
	p.setPropertyName("Tom");
	cout << "Property Name =" << p.getPropertyName() << endl;
	p.setPropertyValue(100);
	cout << "Property value =" << p.getPropertyValue() << endl;
	p.setPropertyType(comercial);
	cout << "" << p.getPropertyType() << endl;
	p.setPropertyAddress("Tashkent");
	cout << "Property address " << p.getPropertyAddress() << endl;
	p.setnumberOfBedrooms(3);
	cout << "Number of bedrooms = " << p.getnumberOfBedrooms() << endl;
	p.setnumberOfBathrooms(6);
	cout << "Number of Bathrooms = " << p.getnumberOfBathrooms() << endl;
	cout << "Property tax = " << p.getcalculatePropertyTax(4) << endl;
	cout << "Owner ID: " << o.getOwnerID() << endl;
	cout << "Owner name: " << o.getOwnerName() << endl;
	
	system("pause");
	return 0;
}