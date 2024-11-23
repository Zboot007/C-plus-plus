/*
Student's Fullname: Jamoliddinov Muhammadazimhon
Sudent's ID: u2310118
*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	/*programm 1*/
	int ch;
	cout << "enter sequence: ";
	cin >> ch;
	char sizecharacter = 65;
	for(int i = 0; i < ch; i++)
	{
		if (sizecharacter > 90)
		{
			break;
		}
		for (int j = 0; j <= i; j++) 
		{
			cout << sizecharacter; "\t";
		}
		cout << endl;
		sizecharacter++;
	}

	/*Programm 2*/
	int n, k;
	cout << "Enter sequence: ";
	cin >> n;
	k = 1;
	int num = n;
	for (int i = 0; i < n; i++)
	{
		for (int u = num-1; u>0;u--) 
		{
			cout <<" ";
		}
		num--;
		for (int j = 0; j <= i; j++)
		{
			cout << k;
			k++;
		}
		k = 1;
		cout << endl;
	}

	/*Programm 3*/
	int n, k;
	cout << "enter sequence: ";
	cin >> n;
	k = 1;
	int num = n;
	for (int i = 0; i < n; i++)
	{
		for (int u = num - 1; u > 0; u--)
		{
			cout << " ";
		}
		num--;
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
			k++;
		}
		for (int l = 0; l < i; l++)
		{
			cout << "*";
		}
		cout << endl;
	}

	/*programm 4*/
	int n, k;
	cout << "enter sequence: ";
	cin >> n;
	k = n/2;
	int num = n;
	for (int i = 0; i <= k; i++)
	{
		for (int u = 0; u < k-i; u++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = k-1; i >= 0; i--)
	{
		for (int p = 0; p < k-i; p++)
		{
			cout << " ";
		}	
		for (int j = 0; j <2*i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	/*Programm 5*/

	int i;
	float fact = 1.0, res, n_res = 0;
	for (i = 1; i < 8; i++)
	{
		fact = fact * i;
		res = i / fact;
		n_res = n_res + res;
	}
	printf("%f", n_res);
	cout << endl;
	cout << endl;
	cout << endl;
	void main()
	{
		
	}
	system("pause");
	return 0;
}