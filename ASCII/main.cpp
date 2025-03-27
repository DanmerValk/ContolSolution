#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
}