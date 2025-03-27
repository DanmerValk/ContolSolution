#include<iostream>
using namespace std;
//#define CHESS_0
//#define KVADRAT_2
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB
//#define ROMB_2


	void main()
{
	setlocale(LC_ALL, "ru");
#ifdef CHESS_0
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			/*if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";*/
			/*if (i % 2 == j % 2)cout << "+ ";else cout << "- ";*/
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	
#endif // CHESS_0
#ifdef KVADRAT_2
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
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
#ifdef TRIANGLE_4
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " *";
		for (int j = n; j < n; j++)cout << "  ";
		cout << endl;
	}
#endif // TRIANGLE_4
	// Честно скопировал, не понимаю.
#ifdef ROMB
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)cout << " ";
		cout << "/";

		for (int j = n; j < n + i * 2; j++)cout << " ";//не понятно
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << " ";
		for (int j = 0; j < i; j++)cout << " ";
		cout << "\\";
		//for (int j = n * 2 - i - 2; j > i; j--)cout << " ";
		cout << "/";
		cout << endl;
	}
	cout << endl;
#endif // ROMB
	//не понятно
#ifdef ROMB_2
	int n;
	cout << "введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			//cout << "* ";
			if (i == (j + n) || j == (i + n))cout << "\\";//не понятно
			else if (i == (n - j - 1) || (i - n == (n * 2 - j - 1)))cout << "/";//не понятно
			//else if (i == (n  - j - 1) || i==(n * 3 - j - 1))cout << "/";//не понятно
			else cout << " ";
		}
		cout << endl;
	}
#endif // ROMB_2

}