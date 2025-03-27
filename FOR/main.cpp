#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FOR
//#define SIMPLE
//#define PERFECT
//#define PIFAGOR
//#define PIFAGOR_2
//#define UMNOGENIE
//#define FACTORIAL
//#define ASCII
//#define FIBONACHI
//#define FIBONACH_2
//#define PALINDROME
//#define UMNOGENIE_2
//#define STEPEN
//#define SPACE_BETWEEN 8
void main()
{
	setlocale(LC_ALL, "ru");
#ifdef FOR
	//for (;;)
//cout << "Привет, FOR\n\n";
	int n;
	cout << "введите количество имераций: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FOR
#ifdef SIMPLE
	int n;
	cout << "введите предельное число: "; cin >> n;
	for (int i = 1; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE
#ifdef PERFECT
	int n;
	cout << "введите предельное число: "; cin >> n;
	for (int i = 2; i < n; i++)
	{
		bool perfect = true;
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)sum += j;
		}
		if (i == sum)cout << i << "\t";
	}
	cout << endl;
#endif // PERFECT
#ifdef PIFAGOR
	for (int i = 0; i <= 9; i++)
		cout << i << '\t';
	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		cout << i << '\t';
		for (int j = 1; j <= 9; j++)
			cout << i * j << '\t';
		cout << endl;
	}
#endif // PIFAGOR
#ifdef PIFAGOR_2
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\n";
		}
		cout << endl;
	}
#endif // PIFAGOR_2
#ifdef UMNOGENIE
	int i, j;

	for (i = 1; i < 10; i++)
	{

		for (j = 1; j < 10; j++)

			printf("%4d", i * j);

		printf("\n");

	}
#endif // UMNOGENIE
#ifdef FACTORIAL
	double n, factorial = 1;
	cout << "введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	cout << "факториал числа: " << n << " равен: " << factorial << endl
#endif // FACTORIAL
#ifdef ASCII
		for (int i = 0; i < 256; i++)
		{
			if (i % 16 == 0)cout << endl;
			cout << (char)i << " ";
		}
#endif // ASCII
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
#ifdef FIBONACH_2
	int n;
	cout << "введите предел: "; cin >> n;
	for (int a = 0, b = 1, c = a = b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
}
#endif // FIBONACH_2
#ifdef PALINDROME
cout << "Palindrome" << endl;
int number;
int reverse = 0;
cout << "Введите число: "; cin >> number;
int buffer = number;
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
#endif // PALINDROME
#ifdef UMNOGENIE_2
int num;
cout << "number: "; cin >> num;
if (num > 0 || num > 10)
{
	for (int i = 1; i < 10; i++)
		cout << num << "*" << i << "=" << num * i << endl;
}
#endif // UMNOGENIE_2
#ifdef STEPEN
double a;
int n, i;
double N = 1;
cout << "введите возводимое в степень число: ";
cin >> a;
cout << endl << "введите степень числа: ";
cin >> n;
if (n < 0)
{
	a = 1 / a;
	n = -n;
}
for (i = 0; i < n; i++)
	N *= a;
cout << endl << "результат: " << n << " числа " << a << " = " << N << endl;
#endif // STEPEN
#ifdef SPACE_BETWEEN 8
int h;
cout << "введите высоту треугольника: "; cin >> h;
long long int nf = 1;
cout.width(SPACE_BETWEEN / 2 * (h + 1));
cout << "";
cout << 1 << "\n";
for (int n = 1; n < h; n++)
{
	nf *= n;
	long long int mf = 1;
	for (int i = 0; i < h - n; i++) cout << "    ";
	cout.width(SPACE_BETWEEN);
	//cout << left;
	cout << 1 /* << "       " */;
	for (int m = 1; m <= n; m++)
	{
		mf *= m;
		long long int nmf = 1;
		for (int nm = 1; nm <= n - m; nm++)
		{
			nmf *= nm;
		}
		cout.width(SPACE_BETWEEN);
		cout << nf / mf / nmf /* << "       "*/;
	}
	cout << endl;
}
#endif // SPACE_BETWEEN 8


}