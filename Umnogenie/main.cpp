#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int num;
	cout << "number: "; cin >> num;
	if (num > 0 || num > 10)
	{
		for (int i = 1; i < 10; i++)
			cout << num << "*" << i << "=" << num * i << endl;
	}
	
}