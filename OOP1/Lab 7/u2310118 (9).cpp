/*
Student ID: u2310118
Full name: Jamoliddinov Muhammadazimxon.
*/
#include<iostream>
using namespace std;

/*Programm 1*/

double area(double a, double b, double c, double sum)
{
	sum =(a + b + c)/2;
	sum = sqrt(sum * (sum - a) * (sum - b) * (sum - c));
	return sum;
}
double area(double a,double k, double f)
{
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
	if (l <= 4)
	{
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
			double a, k, f;
			cout << "Input radius of a circle: ";
			cin >> a;
			cout << "The area of circle is = " << area(a, 0, 0) << endl;
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
	}
	else
		cout << "Wrong input!" << endl;
	system("pause");
	return 0;
}

/*Programm 2*/

double circle(double a, double pi, double r)
{
	a = 0;
	pi = 3.14;
	a = 2 * pi * r;
	return a;
}
double rectangle(double a, double b, double c)
{
	c = 0;
	c = 2*a + 2*b;
	return c;
}
double triangle(double a, double b, double c, double d)
{
	d = a + b + c;
	return d;
}
double square(double a, double b)
{
	b = 4 * a;
	return b;
}
int main()
{
	int x;
	cout << "Input 1 to calculate circumference of circle, 2 for rectangle, 3 for triangle, 4 for square: ";
	cin >> x;
	if (x < 5)
	{
		switch (x)
		{
		case 1:
		{
			double a, pi, r;
			cout << "Input radius of circle: ";
			cin >> r;
			cout << "Circumference of circle is = " << circle(0, 0, r) << endl;
		}
		case 2:
		{
			double a, b, c;
			cout << "Input length of rectangle: ";
			cin >> a;
			cout << "Input width of rectangle: ";
			cin >> b;
			cout << "The circumference of rectangle is " << rectangle(a, b, 0) << endl;
		}
		case 3:
		{
			double a, b, c, d;
			cout << "Input side a of triangle: "; cin >> a;
			cout << "Input side b of triangle: "; cin >> b;
			cout << "Input side c of triangle: "; cin >> c;
			cout << "The circumference of triangle is = " << triangle(a, b, c, 0) << endl;
		}
		case 4:
		{
			double a, b;
			cout << "Input length of square: "; cin >> a;
			cout << "Circumferece of a square is = " << square(a, 0) << endl;
		}
		}
	}
	else
		cout << "Wrong number";
	system("pause");
	return 0;
}

/*Programm 3*/

int integer(int a, int b, int c)
{
	if (a >= b && a >= c)
	{
		cout << "The largest number is: " << a << endl;
	}
	else if (b >= c && b >= a)
	{
		cout << "The largest number is: " << b << endl;
	}
	else if (c >= b && c >= a)
	{
		cout << "The largest number is: " << c << endl;
	}
	else if (a == b && b == c && a == c)
	{
		cout << "All numbers are equal." << endl;
	}
	else
		cout << "Entered numbers are worng!" << endl;
}
double floating(double a, double b, double c)
{
	if (a >= b && a >= c)
	{
		cout << "The largest number is: " << a << endl;
	}
	else if (b >= c && b >= a)
	{
		cout << "The largest number is: " << b << endl;
	}
	else if (c >= b && c >= a)
	{
		cout << "The largest number is: " << c << endl;
	}
	else if (a == b && b == c && a == c)
	{
		cout << "All numbers are equal." << endl;
	}
	else
		cout << "Entered numbers are worng!" << endl;
}
int main()
{
	int l;
	cout << "Input 1 to know which is the largest integer amoung 3 numbers, 2 to know which is the largest floating point between 3 numbers: "; 
	cin >> l;
	if (l < 3)
	{
		switch (l)
		{
		case 1:
		{
			int a, b, c;
			cout << "Input 3 integers to know which is the bigest: ";
			cin >> a;
			cin >> b;
			cin >> c;
			cout << integer(a, b, c) << endl;
			break;
		}
		case 2:
		{
			double a, b, c;
			cout << "Input 3 floating point numbers to know which is the largest: ";
			cin >> a;
			cin >> b;
			cin >> c;
			cout << floating(a, b, c) << endl;
		}
		}
	}
	else if(l>=3)
	{
		cout << "Input again please!" << endl;
	}
	system("pause");
	return 0;
}

/*Programm 4*/

template<typename T0, class T1, class T2>
void integer(T0 a, T1 b, T2 c)
{
	if (a >= b && a >= c)
	{
		cout << "The largest number is: " << a << endl;
	}
	else if (b >= c && b>= a)
	{
		cout << "The largest number is: " << b << endl;
	}
	else if (c >= b && c >= a)
	{
		cout << "The largest number is: " << c << endl;
	}
	else if (a == b && b == c && a == c)
	{
		cout << "All numbers are equal." << endl;
	}
	else
		cout << "Entered numbers are worng!" << endl;
}
int main()
{
	double a, b, c;
	cout << "Input three integers to know which is the largest: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	integer(a, b, c);
	system("pause");
	return 0;
}