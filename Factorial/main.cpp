#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	double n, factorial = 1;
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	cout << "��������� �����: " << n << " �����: " << factorial << endl;
}