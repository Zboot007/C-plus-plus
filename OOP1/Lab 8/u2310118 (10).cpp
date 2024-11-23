#include<iostream>
using namespace std;
int power(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}
	return x * power(x, y - 1);
}
int naturalnumbers(int n, int b)
{
	int c = 0;
	if (n == 1)
	{
		return 1;
	}
	else if (b == n)
	{
		return c;
	}
	else
		return c = b + naturalnumbers(n, ++b);
}
int Fibonacci(int fib, int x, int y)
{
	cout << " " << x << " ";
	if (fib == 1)
	{
		return y;
	}
	else
		return Fibonacci(--fib, y, y + x);
}
int GCD(int a, int b)
{
	int c;
	c = a % b;
	if (c == 0)
	{
		return b;
	}
	else
	{
		return GCD(b, c);
	}
}
int FXY(int x, int y)
{
	if (x < y)
	{
	    return 0;
	}
	else
	{
		return FXY(x - y, y) + 1;
	}
}
int main()
{
	cout << "----------------------------------------------------------------------------" << endl;
	int l;
	cout << "Input 1 to calculate x^y, input 2 to calculate the sum of natural numbers, input 3 to display Fibonacci series, input 4 to calculate G.C.D, input 5 ot calculate F(x, y): ";
	cin >> l;
	switch (l) 
	{
	case 1: 
	{
		int x, y;
		cout << "Input number x and y to know x^y: ";
		cin >> x >> y;
		cout << power(x, y) << endl;
		return main();
	}
	case 2:
	{
		int n, b, c;
		b = 0;
		cout << "Enter number to calculate until n(th) sum: ";
		cin >> n;
		cout << "Sum of natural numbers are = " << naturalnumbers(n, b) << endl;
		system("pause");
		return main();
	}
	case 3: 
	{
		int fib;
		cout << "Input number to display Fibonacci numbers: ";
		cin >> fib;
		cout << Fibonacci(fib-1,0,1)<< endl;
		return main();
	}
	case 4:
	{
		int a, b;
		cout << "Input a nad b to know it's GCD: "<< endl;
		cin >> a;
		cin >> b;
		cout << "The GCD of " << a << " and " << b << " is: " << GCD(a, b) << endl;
		return main();
	}
	case 5:
	{
		int x, y;
		cout << "Input F(x and y):"; cin >> x >> y;
		cout <<"F(x and y) = " << FXY(x, y) << endl;
		return main();
	}
	default:
	{
		cout << "Input again!" << endl;
	}
	}
	system("pause");
	return 0;
}