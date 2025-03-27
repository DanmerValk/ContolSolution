#include<iostream>
#include<conio.h>

using namespace std;
//#define CALC_IF_ELSE
//#define CALC_SWITCH
//#define CALC_2
void main()
{
	setlocale (LC_ALL, "ru");
	double a, b; //числа вводимые пользователем
	char s;//sign - знак операции
	

#ifdef CALC_IF_ELSE
	cout << "введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error:no operation" << endl;
	}
#endif // CALC_IF_ELSE
#ifdef CALC_SWITCH
	cout << "введите простое арифметическое выражение: ";
	cin >> a;
	do
	{
		//cout << a;
		cin >> s >> b;
		switch (s)
		{
		case '+': a += b; break;
		case '-': a -=b; break;
		case '*': a *=b; break;
		case '/': a /=b; break;
		default: cout << "Error: No operation" << endl;
		}
		//cout << a << s << b << "=" << a << endl;
		//cout << "=" << a << endl;
		cout << "=";
		cout << a;
	} while (true);

	

	
#endif // CALC_SWITCH
#ifdef CALC_2
	float num1, num2;
	char opr;
	cout << "введите первое числ:\n "; cin >> num1;
	cout << "введите второе числ:\n "; cin >> num2;
	cout << endl;
	cout << "введите оператор: + (сложение), - (вычитание)," << " * (умножение), / (деление): ";
	cin >> opr;
	cout << endl;
	cout << num1 << " " << opr << " " << num2 << " = ";
	switch (opr)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case'-':
		cout << num1 - num2 << endl;
		break;
	case'*':
		cout << num1 * num2 << endl;
		break;
	case'/':
		if (num2 != 0)
			cout << num1 / num2 << endl;
		else
			cout << "ошибка \nнельзя делить на ноль" << endl;
		break;
	default:
		cout << "законая операция" << endl;
	}
#endif // CALC_2





}