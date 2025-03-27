#include<iostream>
using namespace std;
//#define KVADRAT
//#define KVADRAT_2
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4

	void main()
{
	setlocale(LC_ALL, "ru");
#ifdef KVADRAT
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "-+";
		}
		cout << endl;
	}
	cout << endl;
#endif // KVADRAT
#ifdef KVADRAT_2
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // KVADRAT_2
#ifdef TRIANGLE_1
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_2
#if TRIANGLE_3
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = n; j < n; j++)cout << " *";
		cout << endl;
	}
	

}