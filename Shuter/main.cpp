#include <iostream>
#include <conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Enter 13
#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

//#define IF_ELSE

void main()
{
	setlocale(LC_ALL, "ru");

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
}