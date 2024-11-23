/*
ID: U2310118
Full Name: Jamoliddinov Muhamadazimhon
Date: 3/6/2024
Time: 5.24 pm
*/
#include <iostream>
#include<string>
#include "Property.h"
#include "ResidentialProperty.h"
#include"ComercialProperty.h"
using namespace std;
template<typename T2> class DetailedProperty : Property
{
private:
    T2 propertySize;
public:
    DetailedProperty(int pid, string pname, int pvalue, T2 psize) : Property(pid, pname, pvalue), propertySize(psize) {}
    DetailedProperty(T2 psize)
    {
        psize = 34.6;
    }
    void display()
    {
        cout << "Property ID: " << getPropertyId() << endl;
        cout << "Property Name: " << getPropertyName() << endl;
        cout << "Property Value: " << getPropertyValue() << endl;
        cout << "Property Size: " << propertySize << endl;
    }
};

//comparing two objects
template<typename T1>
T1 maxValue(T1 x, T1 y)
{
    return (x.getPropertyValue() > y.getPropertyValue()) ? x : y;
}
int main()
{
    //creating two object
    Property p1(1, "Luxwen", 100), p2(2, "Oser", 200);
    Property p3 = maxValue(p1, p2) ;
    cout << "The greater Property object is below: " << endl;
    p3.PrintPropertyDetails();
    cout << "***********" << endl;
    DetailedProperty<int> p4(2, "Banan", 1200, 2030);
    DetailedProperty<string> p5(2, "Yud", 1200, "bigBang");
    DetailedProperty<double> p6(2, "Sloper", 1200, 34.6);
    cout << "Detailed Property:" << endl;
    p4.display();
    cout << "***********" << endl;
    p5.display();
    cout << "***********" << endl;
    p6.display();
    system("pause");
    return 0;
}
