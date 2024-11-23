#ifndef COMERCIALPROPERTY_H
#define COMERCIALPROPERTY_H
#include<iostream>
#include<string>
#include"Property.h"
using namespace std;
class CommercialProperty : public Property
{

private:
	string businessType;
	int numOfRooms;
public:
	CommercialProperty() {
		businessType = "none";
		numOfRooms = 1;
	}
	CommercialProperty(int pid, string pname, int pvalue, string btype, int nroom) {
		setPropertyId(pid);
		setPropertyName(pname);
		setPropertyValue(pvalue);
		businessType = btype;
		numOfRooms = nroom;
	}

	string getBusinessType();
	int getNumOfRooms();
	void setBusinessType(string btype);
	void setNumOfRooms(int nroom);
	~CommercialProperty() {
		cout << "I am deleted...  : CommercialProperty" << endl;
	}
};

#endif // !
