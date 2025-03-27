#include<iostream>
#include<conio.h>
using namespace std;
//#define WHILE_2
//#define KEY
//#define CALC_IF_ELSE
//#define CALC_SWITCH
//#define CALC_2
//#define IF_ELSE
//#define SHUTER
#define Enter 13
#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77
void main()
{
	setlocale(LC_ALL, "ru");
	//double a, b; //числа вводимые пользователем
	//char s;//sign - знак операции
#ifdef WHILE_2
	int n;
	cout << "введите колличество интнраций: "; cin >> n;
	while (n > 0)
	{
		cout << --n << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2
#ifdef KEY
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
#endif // KEY
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
		case '-': a -= b; break;
		case '*': a *= b; break;
		case '/': a /= b; break;
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
#ifdef IF_ELSE
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();//функция, ожидает нажатие клавиши и возвращает ASCII код нажатой клавиши.
					   // этотASCII код мы записываеи переменую key, оператором присваивания
		//cout << (int)key << "\t" << key << endl;//(int)key это явное преобразавоние переменой key в тип int
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "вправо" << endl;
		else if (key == ' ')cout << "прыжок" << endl;
		else if (key == Enter)cout << "огонь" << endl;
		else if (key != -32 && key != Escape) cout << "Error" << endl;
	} while (key != Escape);
#endif // IF_ELSE
#ifdef SHUTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w': cout << "вперед" << endl; break;
		case 's': cout << "назад" << endl; break;
		case 'a': cout << "влево" << endl; break;
		case 'd': cout << "вправо" << endl; break;
		case 'W':
		case 'S':
		case 'A':
		case 'D':
		case UpArrow:
		case DownArrow:
		case LeftArrow:
		case RightArrow:
		case ' ': cout << "прыжок" << endl; break;
		case Enter: cout << "огонь" << endl; break;
		case Escape: cout << "выход" << endl;
		case -32: break;
		default: cout << "Errore" << endl;
		}
	} while (key != Escape);
#endif // SHUTER

}