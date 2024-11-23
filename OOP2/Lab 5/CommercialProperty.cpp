#include"CommercialProperty.h"

string CommercialProperty::getBusinessType() {
	return businessType;
}
int CommercialProperty::getNumOfRooms() {
	return numOfRooms;
}
void CommercialProperty::setBusinessType(string btype) {
	businessType = btype;
}
void CommercialProperty::setNumOfRooms(int nroom) {
	if (nroom < 0) {
		cout << "You have negative value for Number Of Bedrooms so we changed it to positive";
		numOfRooms = -(nroom);
	}
	else {
		numOfRooms = nroom;
	}
}s