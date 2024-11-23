#include<iostream>
using namespace std;
int main()
{
	int i=0, sum = 0, sum_sqt = 0;
	for (i = 2; i < 10; i += 2)
	{
		sum += i;
		sum_sqt += i * i;
	}
	cout << sum << endl;
	cout << sum_sqt << endl;
	system("pause");
	return 0;
}