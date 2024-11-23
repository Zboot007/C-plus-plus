/*
	Full name: Jamoliddinov Muhammadazimxon.
	ID: U2310118
*/
#include<iostream>
#include<cstring>
using namespace std;
void taskone()
{
	string a, b;
	cout << "Input word:"; cin >> a;
	a = b;
	reverse(a.begin(), a.end());
	if (a == b)
	{
		cout << "It is palindrome." << endl;
	}
	else
		cout << "It is not palindrome." << endl;
}
void tasktwo()
{
	string a, c;
	string* b;
	cout << "Enter word to see reverse of it: ";  cin >> a;
	c = a;
	b = &a;
	reverse(a.begin(), a.end());
	cout << "The reverse of word '" << c << "' is '" << *b << "'." << endl;
}
void taskthree()
{
	int b[20][20];
	int d, c;
	int* ptr1;
	int* ptr2;
	ptr1 = &d;
	ptr2 = &c;
	cout << "Enter number of rows: "; cin >> *ptr1;
	cout << "Enter number of columns: "; cin >> *ptr2;
	for (int i = 0; i < *ptr2; i++)
	{
		for (int j = 0; j < *ptr2; j++)
		{
			cout << "Input a[" << i << "][" << j << "]" << "'s number: "; cin >> b[i][j];
		}
	}
	cout << "======================================" << endl;
	for (int i = 0; i < *ptr2; i++)
	{
		for (int j = 0; j < *ptr2; j++)
		{
			cout << b[i][j] << "\t";
		}
		cout << endl;
	}
	int minimum = 5555555, position1, position2;
	cout << "Enter number which you want to search: "; cin >> minimum;
	for (int i = 0; i < *ptr2; i++)
	{
		for (int j = 0; j < *ptr2; j++)
		{
			if (b[i][j] == minimum)
			{
				minimum = b[i][j];
				position1 = i;
				position2 = j;
			}
		}
	}
	cout << "Searched number at position a[" << position1 << "]["<<position2<<"] is " << minimum << endl;
}
void task7()
{
	int b[20]{};
	int d;
	int* ptr1;
	ptr1 = b;
	cout << "Input how many numbers you want: "; cin >> d;
	for (int i = 0; i < d; i++)
	{
		cout << "Input number for a[" << i << "]'s number: "; cin >> b[i];
	}
	for (int i = 0; i < d; i++)
	{
		cout << ptr1[i] << "\t";
	}
	cout << endl;
	int minimum = 5555555, position;
	for (int i = 0; i < d; i++)
	{
		if (b[i] < minimum)
		{
			minimum = b[i];
			position = i;
		}
	}
	cout << "Minimum number at position a[" << position << "] is " << minimum << endl;
}
void taskfour()
{
	int a, b, c, d;
	cout << "a + bi" << endl;
	cout << "Input number for the first a: "; cin >> a;
	cout << "Input number for the first b: "; cin >> b;
	cout << "Input for the second a: "; cin >> c;
	cout << "Input for the second b: "; cin >> d;
	if (b > 0)
	{
		cout << "First: = " << a << " + " << b << "i" << endl;
	}
	else if (b < 0)
	{
		cout << "First: = " << a << b << "i" << endl;
	}
	if (d > 0)
	{
		cout << "Second: = " << c << " + " << d << "i" << endl;
	}
	else if (d < 0)
	{
		cout << "Second: = " << c << d << "i" << endl;
	}
	if (b + d < 0)
	{
		cout << "Summaration = " << a + c << b + d << "i" << endl;
	}
	else if (b + d > 0)
	{
		cout << "Summaration = " << a + c << " + " << b + d << "i" << endl;
	}
	else if ((b + d) == 0)
	{
		cout << "Summaration = " << a + c << endl;
	}
	else if ((a + c) == 0)
	{
		cout << "Summaration = " << b + d << "i" << endl;
	}
	else if ((a - c) == 0)
	{
		cout << "Summaration = " << b + d << "i" << endl;
	}
	if (b - d > 0)
	{
		cout << "Substraction = " << a - c << " + " << b - d << "i" << endl;
	}
	else if (b - d < 0)
	{
		cout << "Substraction = " << a - c << b - d << "i" << endl;
	}
	else if ((b - d) == 0)
	{
		cout << "Substraction = " << a - c << endl;
	}
	else if ((a - c) == 0)
	{
		cout << "Substraction = " << b - d << "i" << endl;
	}
}
void taskfive()
{
	float a, b, c, s, d;
	float* ptr;
	cout << "Input side a:"; cin >> a;
	cout << "Input side b:"; cin >> b;
	cout << "Input side c:"; cin >> c;
	s = (a + b + c) / 2;
	ptr = &s;
	d = sqrt(*ptr * (*ptr - a) * (*ptr - b) * (*ptr - c));
	ptr = &d;
	cout << "The area of trianle using pointers is: " << *ptr << endl;
}
void tasksix()
{
	int c, b;
	int* a;
	int* ptr;
	cout << "Enter first number: "; cin >> c;
	cout << "Enter second number: "; cin >> b;
	a = &c;
	ptr = &b;
	cout << endl << *a << endl << *ptr << endl;
	cout << "Swapped version is:" << endl;
	cout << endl << *ptr << endl << *a << endl;

}
int main()
{
	int l;
	cout << "Input task: ";
	cin >> l;
	switch (l)
	{
	case 1:
	{
		taskone();
		return main();
	}
	case 2:
	{
		tasktwo();
		return main();
	}
	case 3:
	{
		taskthree();
		return main();
	}
	case 4:
	{
		taskfour();
		return main();

	}
	case 5:
	{
		taskfive();
		return main();
	}
	case 6:
	{
		tasksix();
		return main();
	}
	case 7:
	{
		task7();
		return main();
	}
	}
	system("pause");
	return 0;
}