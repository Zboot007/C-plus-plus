/*
Student ID: u2310118
Full name: Jamoliddionov Muhammadazimxon
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int salary, result;
	cout << "input salary: ";
	cin >> salary;
	if (salary <= 1500) 
	{
		cout << "tax " << 0 << endl;
		cout << "income " << salary - 0 << endl;
	}
	else if (1501 <= salary <= 3000) 
	{
		cout << "tax" << (salary * 10) / 100 << endl;
		cout << "income " << salary - (salary * 10) / 100 << endl;
	}
	else if (3001 <= salary <= 5000) 
	{
		cout << "tax" << (salary * 20) / 100 << endl;
		cout << "income " << salary - (salary * 20) / 100 << endl;
	}
	else if (salary >= 5000)
	{
		cout << "tax" << (salary * 30) / 100 << endl;
		cout << "income " << salary - (salary * 30) / 100 << endl;
	}

	/*program 2*/

	int number;
	cout << "input number:";
	cin >> number;
	if (number < 0) {
		cout << "entered number is negative" << endl;
	}
	else if (number == 0) {
		cout << "entered number is zero" << endl;
	}
	else if (number > 0) {
		cout << "entered number is positive" << endl;
	}

	/*program 3*/
	int hardness, carbon, tensile;
	cout << "enter hardness:";
	cin >> hardness;
	cout << "enter tensile:";
	cin >> tensile;
	cout << "enter carbon:";
	cin >> carbon;
	if (hardness > 50 && carbon < 0.7 && tensile > 5600) {
		cout << "grade is: 10" << endl;
	}
	else if (hardness > 50 && carbon < 0.7 && tensile < 5600) {
		cout << "grade is: 9" << endl;
	}
	else if (hardness < 50 && carbon < 0.7 && tensile > 5600) {
		cout << "grade is: 8" << endl;
	}
	else if (hardness > 50 && carbon > 0.7 && tensile > 5600) {
		cout << "grade is: 7" << endl;
	}
	else if (hardness < 50 && carbon > 0.7 && tensile > 5600) {
		cout << "grade is: 6" << endl;
	}
	else if (hardness < 50 && carbon < 0.7 && tensile < 5600) {
		cout << "grade is: 6" << endl;
	}
	else if (hardness > 50 && carbon > 0.7 && tensile < 5600) {
		cout << "grade is: 6" << endl;
	}
	else(cout << "grade is: 5");

	/*Program 4*/
	char var;
	cout << "enter any letter to know upper or lower case: ";
	cin >> var;
	int asciivalue = (int)var;
	if (asciivalue >= 65 && asciivalue <= 90) {
		cout << "the letter is upper case" << endl;
	}
	else if (asciivalue >= 97 && asciivalue <= 122) {
		cout << "that is lower case" << endl;
	}
	else
		cout << "that is not letter" << endl;

	/*programm 5*/
	int leap, r, y, d;
	cout << "enter year to know leap year or not:";
	cin >> leap;
	r = leap % 4;
	y = leap % 100;
	d = leap % 400;
	if (d == 0) {
		cout << "it is leap year." << endl;
	}
	else if (y == 0) {
		cout << "it is not leap year." << endl;
	}
	else if (r == 0) {
		cout << "it is leap year." << endl;
	}
	else
		cout << "it is not leap year" << endl;
	system("pause");
	return 0;
}