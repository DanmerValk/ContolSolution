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
	//double a, b; //����� �������� �������������
	//char s;//sign - ���� ��������
#ifdef WHILE_2
	int n;
	cout << "������� ����������� ���������: "; cin >> n;
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
	cout << "������� ������� �������������� ���������: ";
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
	cout << "������� ������� �������������� ���������: ";
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
	cout << "������� ������ ����:\n "; cin >> num1;
	cout << "������� ������ ����:\n "; cin >> num2;
	cout << endl;
	cout << "������� ��������: + (��������), - (���������)," << " * (���������), / (�������): ";
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
			cout << "������ \n������ ������ �� ����" << endl;
		break;
	default:
		cout << "������� ��������" << endl;
	}
#endif // CALC_2
#ifdef IF_ELSE
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();//�������, ������� ������� ������� � ���������� ASCII ��� ������� �������.
					   // ����ASCII ��� �� ���������� ��������� key, ���������� ������������
		//cout << (int)key << "\t" << key << endl;//(int)key ��� ����� �������������� ��������� key � ��� int
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == Enter)cout << "�����" << endl;
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
		case 'w': cout << "������" << endl; break;
		case 's': cout << "�����" << endl; break;
		case 'a': cout << "�����" << endl; break;
		case 'd': cout << "������" << endl; break;
		case 'W':
		case 'S':
		case 'A':
		case 'D':
		case UpArrow:
		case DownArrow:
		case LeftArrow:
		case RightArrow:
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape: cout << "�����" << endl;
		case -32: break;
		default: cout << "Errore" << endl;
		}
	} while (key != Escape);
#endif // SHUTER

}