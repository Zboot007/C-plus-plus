/*
Full name: Jamoliddinov Muhammadazimhon
ID: u2310118
*/
#include<iostream>
using namespace std;
void matrix()
{
	int a[20][20], b[20][20], c[20][20];
	int row1, col1, row2, col2;
	cout << "Enter number of rows in 'a' matrix : "; cin >> row1;
	cout << "Enter number of columns in 'a' matrix : "; cin >> col1;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << "Enter a[" << i << "][" << j << "] 's element of the matrix : "; cin >> a[i][j];
		}
	}
	cout << endl;
	cout << "Enter number of rows in 'b' matrix : "; cin >> row2;
	cout << "Enter number of columns in 'b' matrix : "; cin >> col2;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			cout << "Enter b[" << i << "][" << j << "] 's element of the matrix : "; cin >> b[i][j];
		}
	}
	cout << "*************************************************" << endl;
	int x;
	cout << "Enter 1 to see the matrix, 2 to sum, 3 to transpose, 4 to product and anything else to quit : "; cin >> x;
	switch (x)
	{
	case 1:
	{
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				cout << a[i][j] << "    ";
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < row2; i++)
		{
			for (int j = 0; j < col2; j++)
			{
				cout << b[i][j] << "    ";
			}
			cout << endl;
		}
	}
	case 2:
	{
		if (row1 == row2 && col1 == col2)
		{
			cout << "The sum is : " << endl;
			for (int i = 0; i < row1; i++)
			{
				for (int j = 0; j < col1; j++)
				{
					c[i][j] = a[i][j] + b[i][j];
				}
			}
			for (int i = 0; i < row1; i++)
			{
				for (int j = 0; j < col1; j++)
				{
					cout << c[i][j] << "    ";
				}
				cout << endl;
			}
		}
		else
		{
			cout << "These two matrix can't be summed !!!" << endl;
		}
	}
	case 3:
	{
		cout << "Here is transpose of first matrix : " << endl;
		for (int i = 0; i < col1; i++)
		{
			for (int j = 0; j < row1; j++)
			{
				cout << a[j][i] << "    ";
			}
			cout << endl;
		}
		cout << "Here is transpose of second matrix : " << endl;
		for (int i = 0; i < col2; i++)
		{
			for (int j = 0; j < row2; j++)
			{
				cout << b[j][i] << "    ";
			}
			cout << endl;
		}
	}
	case 4:
	{
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col2; j++)
			{
				c[i][j] = 0;
			}
		}
		cout << "The product of two matrix : " << endl;
		if (col1 == row2)
		{
			for (int i = 0; i < row1; i++)
			{
				for (int j = 0; j < col2; j++)
				{
					for (int k = 0; k < col1; k++)
					{
						c[i][j] = c[i][j] + a[i][k] * b[k][j];
					}
				}
				cout << endl;
			}
		}
		else
		{
			cout << "The product of these two functions isn't possible !!! " << endl;
		}
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col2; j++)
			{
				cout << c[i][j] << "    ";
			}
			cout << endl;
		}
	}
	default:
	{
		break;
	}
	}
}
void salesman()
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
	cout << "	1-salesman:    2-salesman:    3-salesman:    4-salesman:    5-salesman:" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << i + 1 << "-product : ";
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << "		";
		}
		cout << endl;
	}
	cout << "**********************************************************************" << endl;
	cout << endl;
	int b = 0;
	for (int i = 0; i < row; i++)
	{
		b = b + a[i][0];
	}
	cout << "Total sales of each salesman is : " << b << endl;
	for (int i = 0; i < row; i++)
	{
		b = 0;
		for (int j = 0; j < col; j++)
		{
			b = b + a[i][j];
		}
		cout << "Total sales of " << i + 1 << "- product is : " << b << endl;
	}
}
int main()
{
	int x;
	cout << "Which task do you want to see(Enter 0 to quit) : "; cin >> x;
	switch (x)
	{
	case 1:
	{
		matrix();
		return main();
	}
	case 2:
	{
		salesman();
		return main();
	}
	default:
	{
		cout << "There are only 2 tasks!!!" << endl;
		return main();
	}
	case 0:
		break;
	}

	system("pause");
	return 0;
}