/*
Full name: Jamoliddinov Muhammadazimhon
ID: u2310118
*/
#include<iostream>
using namespace std;
int main()
{
	char str1[] = "INHA University";
	char *cptr = str1;
	cout << str1 << endl;
	
	for (int i = 0; i < 4; i++)
	{
		cout << str1[i] << *cptr;
		*cptr++;
	}
	cout << endl;
	return 0;
}