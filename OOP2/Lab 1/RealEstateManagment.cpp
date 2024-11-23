#include<iostream>
#include<string>
#include"Property.h"
using namespace std;
int main()
{
	string comercial;
	string residential;
	Property p;
	p.setPropertyId(10);
	cout << "Property id =" << p.getPropertyId() << endl;
	p.setPropertyName("Grill");
	cout << "Property Name =" << p.getPropertyName() << endl;
	p.setPropertyValue(100);
	cout << "Property value =" << p.getPropertyValue() << endl;
	p.setPropertyType(comercial);
	cout <<"Property type" << p.getPropertyValue() << endl;
	system("pause");
	return 0;
}