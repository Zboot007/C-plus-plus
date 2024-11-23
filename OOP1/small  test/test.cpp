#include<iostream>
using namespace std;
int main() 
{
	int n, sum = 0;
	cout << "Input n: "; cin >> n;
	while (n >= 1)
	{
		sum = sum + n;
		n--;
	}
	cout << "Sum = " << sum << endl;
	system("pause");
	return 0;
}