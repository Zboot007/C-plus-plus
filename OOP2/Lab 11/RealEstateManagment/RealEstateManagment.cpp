/*
ID: U2310118
Full Name: Jamoliddinov Muhamadazimhon
Date: 8/05/2024
Time: 5.00 pm
*/
#include <iostream>
#include<string>
#include "Property.h"
#include<exception>
using namespace std;
int main()
{
    Property p0;
    cout << "Property Name: " << p0.getPropertyName()<<endl;
    cout << "Property ID: ";
    p0.setPropertyId(-1);
    cout << "Property Value: ";
    p0.setPropertyValue(0);
    system("pause");
    return 0;
}