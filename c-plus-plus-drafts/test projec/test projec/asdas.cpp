#include<iostream>
using namespace std;
int fact(int n)
{
	if (n > 1)
	{
		return n * fact(n - 1);
	}
	else if (n == 1)
	{
		return 1;
	}
	else
		cout << "Factorial cannot be negative number." << endl;
}
int main()
{
	int n;
	cout << "Input number to calculate facttorial: "; cin >> n;
	cout << "The factorial of " << n << " is = " << fact(n) << endl;
	system("pause");
	return 0;
}