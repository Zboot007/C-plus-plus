#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 10;
	int array[SIZE]{ 123,525,123,445,3,14325,43213,14,245,10 };
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		cout << array[i] << endl;
	}
	system("pause");
	return 0;
}