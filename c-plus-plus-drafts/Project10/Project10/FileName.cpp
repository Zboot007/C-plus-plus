#include<iostream>
using namespace std;
int main()
{
	int a[3][5], row = 3, col = 5, p1, p2, p3;
	cout << "Enter price of product 1 : "; cin >> p1;
	cout << "Enter price of product 2 : "; cin >> p2;
	cout << "Enter price of product 3 : "; cin >> p3;
	for (int i = 0; i < col; i++)
	{
		a[0][i] = p1;
	}
	for (int i = 0; i < col; i++)
	{
		a[1][i] = p2;
	}
	for (int i = 0; i < col; i++)
	{
		a[2][i] = p3;
	}
	for (int i = 1; i <= row; i++)
	{
		cout << "First salesman's product = " << i;
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << "    ";
		}
		cout << endl;
	}
}