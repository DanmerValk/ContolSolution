#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Palindrome" << endl;
	int number;
	int reverse = 0;
	cout << "¬ведите число: "; cin >> number;
	int buffer=number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse = number)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Number" << endl;
	}


}