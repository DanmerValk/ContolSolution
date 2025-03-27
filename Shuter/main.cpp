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
}