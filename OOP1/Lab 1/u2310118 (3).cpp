/*
Student ID: u2310118
Full name: Jamoliddinov Muhammadazimhon
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "Hello world" << endl;
	int num1, num2, result;
	cout << "Enter number x:";
	cin >> num1;
	cout << "Enter number y:";
	cin >> num2;
	result = num1 + num2;
	cout << "Sum =" << result << endl;
	result = num1 - num2;
	cout << "Difference =" << result << endl;
	result = num1 * num2;
	cout << "Multiplacation =" << result << endl;
	result = num1 / num2;
	cout << "Division =" << result << endl;
	int breadth, length, area;
	cout << "Enter the breadth of Rectangle:";
	cin >> breadth;
	cout << "Enter the length of Rectangle:";
	cin >> length;
	area = breadth * length;
	cout << "Area of Rectangle:" << area << endl;
	int num;
	cout << "Enter any number:";
	cin >> num;
	cout << "Entered number is:";
	cout << num << endl;
	int slide, a;
	cout << "Enter the side of a square:";
	cin >> slide;
	a = slide * slide;
	cout << "Area of a square is:" << a << endl;
	return 0;
}