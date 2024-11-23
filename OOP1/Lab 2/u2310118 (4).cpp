/*
Student ID: u2310118
Full name: Jamoliddinov Muhammadaimhon
*/
#include<iostream>;
#include<math.h>
using namespace std;
int main()
{
	/*Programm 1*/
	int circle, radius, area, circumference;
	float pi = 3.14;
	cout << "Enter radius of circle:";
	cin >> radius;
	cout << "Area of a circle is =";
	cout << pi * radius * radius << endl;
	cout << "Circumference of circle is =";
	cout << 2 * pi * radius << endl;

	/*Programm 2*/
	float area1;
	int side1, side2, side3;
	cout << "Enter side A of Scalene triangle:";
	cin >> side1;
	cout << "Enter side B of Scalene triangle:";
	cin >> side2;
	cout << "Enter side C of Scalene triangle:";
	cin >> side3;
	cout << "Area of a Scalene triangle is:";
	area1 = 0.25 * sqrt((side1 + side2 + side3) * (-side1 + side2 + side3) * (side1 - side2 + side3) * (side1 + side2 - side3));
	cout << area1 << endl;

	/*Programm 3*/
	int side6;
	float area2;
	cout << "Enter side of a equilateral triangle: ";
	cin >> side6;
	cout << "Area of equilateral triangle is: ";
	cout << sqrt(3) / 4 * side6 * side6 << endl;

	/*Programm 4*/
	int side8, side7;
	float area4;
	cout << "enter base of a right triangle:";
	cin >> side8;
	cout << "enter height of a right triangle:";
	cin >> side7;
	cout << "area of a right angle triangle is:";
	area4 = (side7 * side8) / 2;
	cout << area4 << endl;

	system("pause");
	return 0;
}