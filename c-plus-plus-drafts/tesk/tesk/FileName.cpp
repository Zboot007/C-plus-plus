#include<iostream>
using namespace std;
int main()
{
    int n = 19, a = 0, b = 0, sumf = 1;
    if (n <= 0)
        sumf = 0;
    int curr = 1;
    for (int i = 1; i < n; i++) {
        a = b;
        b = curr;
        curr = a + b;
        sumf += curr;
    }
    cout << "The sum of fibonocci numbers is:" << sumf << endl;
	system("pause");
	return 0;
}