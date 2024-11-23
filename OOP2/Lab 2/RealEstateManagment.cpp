#include<iostream>
#include<string>
#include"Property.h"
using namespace std;
int main()
{
	{
		string comercial;
		string residential;
		Property p;
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
		cout << "Property tax = " << p.getcalculatePropertyTax(4) <<endl;
	}
	system("pause");
	return 0;
}