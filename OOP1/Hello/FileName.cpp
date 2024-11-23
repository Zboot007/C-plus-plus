#include<iostream>
using namespace std;
int main()
{
	int sum = 0, n, m;
	cout << "Enter number n";
	cin >> n;
	cout << "Input m:";
	cin >> m;
	while (1) 
	{
		sum = sum + n;
		n++;
		cout << "Sum is " << sum << endl;
	}
}