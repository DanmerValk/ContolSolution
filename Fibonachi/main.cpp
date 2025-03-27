#include<iostream>
using namespace std;
//#define FIBONACHI
void main()
{
	setlocale(LC_ALL, "ru");
#ifdef FIBONACHI
	int fib = 0, num = 0, fib1 = 1, fib2 = 1;
	cin >> num;
	cout << "0";
	for (int i = 0; i < num; i++)
	{
		if (i == 0 || i == 1)
			fib = 1;
		else
		{
			fib = fib1 + fib;
			fib1 = fib2;
			fib2 = fib;
		}
		cout << " " << fib;
	}
#endif // FIBONACHI
	int n;
	cout << "введите предел: "; cin >> n;
	for (int a = 0, b = 1, c = a = b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
}