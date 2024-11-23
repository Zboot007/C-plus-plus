/*
Student ID: u2310118
Full name: Jamoliddinov Muhammadazimxon.
*/
#include<iostream>
using namespace std;
double area(double a, double b, double c, double sum)
{
	sum = (1 / 2)*(a + b + c);
	sum = sqrt(sum*(sum - a)*(sum - b)*(sum - c));
	return a;
}
double area(double a, double f)
{
	float k;
	f = 0;
	k = 3.14;
	f = a * a * k;
	return f;
}
int area(int c, int d)
{
	return c * d;
}

double area(int a)
{
	a = a * a;
	return a;
}
int main()
{
	int l;
	cout << "Input 1 to calculate triangle, 2 for circle, 3 for rectangle, 4 for square: ";
	cin >> l;
	switch (l)
	{
	case 1:
	{
		double a, b, c, sum = 0;
		cout << "input side a: "; cin >> a;
		cout << "Input side b: "; cin >> b;
		cout << "Input side c: "; cin >> c;
		cout << "Area of Triangle is = " << area(a, b, c, sum) << endl;
		break;
	}
	case 2:
	{
		double a, f;
		cout << "Input radius of a circle: ";
		cin >> a;
		cout << "The area of circle is = " << area(a, f) << endl;
		break;
	}
	case 3:
	{
		double c, d;
		cout << "Input width: "; cin >> c;
		cout << "input length: "; cin >> d;
		cout << "Area of Rectangle is = " << area(c, d) << endl;
		break;
	}
	case 4:
	{
		int a;
		cout << "Input number: ";
		cin >> a;
		cout << "The square of " << a << " is equal to " << area(a) << endl;
		break;
	}
	}
	system("pause");
	return 0;
}