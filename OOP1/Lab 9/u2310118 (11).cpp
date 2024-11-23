#include<iostream>
using namespace std;
void display(int a)
{
	int b[100];
	for (int i = 0; i < a; i++)
	{
		cout << "Enter quantity for a b[" << i << "] :"; cin >> b[i];
	}
	cout << "-----------------------------------------------------------------" << endl;
	cout << "Elements of array: " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b[i] << endl;
	}
}
double average(double a)
{
	double c;
	c = 0;
	int b[100];
	for (int i = 0; i < a; i++)
	{
		cout << "Enter quantity for a b[" << i << "] :"; cin >> b[i];
	}
	cout << "----------------------------------------------------------------" << endl;
	cout << "Elements of array: " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b[i] << endl;
	}
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	cout << "The average of array is: " << endl;
	for (int i = 0; i < a; i++)
	{
		c = b[i] + c;
	}
	c = c / a;
	return c;
}
int insert(int a)
{
	int b[100];
	for (int i = 0; i < a; i++)
	{
		cout << "Enter quantity for a b[" << i << "] :"; cin >> b[i];
	}
	cout << "-----------------------------------------------------------------" << endl;
	int x, y;
	cout << "Enter number which you want to insert: ";
	cin >> x;
	cout << "Enter position where you want to insert: ";
	cin >> y;
	for (int i = a; i >= y; i--)
	{
		b[i + 1] = b[i];
	}
	b[y] = x;
	a = a + 1;
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	cout << "Elements of array: " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b[i] << endl;
	}
	cout << endl << endl;
	return 0;
}
int remove(int a)
{
	int b[100];
	for (int i = 0; i < a; i++)
	{
		cout << "Enter quantity for a b[" << i << "] :"; cin >> b[i];
	}
	cout << "-----------------------------------------------------------------" << endl;
	int element;
	cout << "Input element which you want to delete from below: " << endl;
	cout << "Elements of array: " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b[i] << endl;
	}
	cout << "Input: "; cin >> element;
	for (int i = 0; i < a; i++) {
		if (b[i] == element) {
			for (int j = i; j < a - 1; j++) {
				b[j] = b[j + 1];
			}
			break;
		}
	}
	a--;
	cout << "=========================================================================" << endl;
	cout << "Elements of array: " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b[i] << endl;
	}
	cout << endl << endl << endl;
	return 0;
}
int main()
{
	int l;
	cout << "Input 1 too display arrays, 2 for average of array elements, 3 to insert an element ta an array, 4 to delete an element from an array: " << endl;
	cin >> l;
	switch (l)
	{
	case 1: 
	{
		int a;
		cout << "Enter number to input quantity of array's: ";
		cin >> a;
		display(a);
		cout << endl;
		return main();
	}
	case 2:
	{
		int a;
		cout << "Input number to know average elements of array: ";
		cin >> a;
		cout << average(a) << endl;
		return main();
	}
	case 3:
	{
		int a;
		cout << "Input number of elements in array: ";
		cin >> a;
		cout << insert(a) << endl;
		return main();
	}
	case 4:
	{
		int x;
		cout << "Input how many elements you want to add in array: ";
		cin >> x;
		cout << remove(x) << endl;
		return main();
	}
	}
	system("pause");
}