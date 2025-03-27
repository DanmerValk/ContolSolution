#include<iostream>
using namespace std;
using std::cout;
using std::cin;
#define UPPER_LEFT_ANGLE  (char)218
#define UPPER_RIGHT_ANGEL (char)191
#define LOWER_LEFT_ANGEL  (char)192
#define LOWER_RIGHT_ANGEL (char)217
#define HORIZONTAIL_LINE  (char)196
#define VERTICAL_LINE     (char)179
#define WHITE_BOX         "\xDB\xDB" 
#define BLACK_BOX		  "  "
//#define WHITE_BOX         (char)219 
//define BLACK_BOX         (char)32           

//#define ASCII
//#define CHES_BOX
//#define BOX
void main()
{
#ifdef ASCII
	for (int i = 176; i < 224; i++)
	{
		/*if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";*/
		cout << i << "\t" << (char)i << endl;
	}
#endif // ASCII

#ifdef CHES_BOX
	setlocale(LC_ALL, "ru");
	int n;
	cout << "введите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGEL;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGEL;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGEL;
			else if (i == 0 || i == n)cout << HORIZONTAIL_LINE << HORIZONTAIL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif // CHES_BOX
	//честно скопированно и не много переделал
#ifdef BOX
	setlocale(LC_ALL, "ru");
	int n;
	cout << "введите количество клеток: "; cin >> n;
	int k;
	cout << "введите размер клетки: "; cin >> k;
	setlocale(LC_ALL, "C");
	for (int t = 0; t < n; t++)
	{
		if (t % 2 == 0)
		{
			for (int i = 0; i < k; i++)
			{
				for (int i = 0; i < n; i++)
				{
					if (i % 2 == 0) for (int j = 0; j < k; j++) cout << "#" << "#";
					else for (int j = 0; j < k; j++) cout << "  ";
				}
				cout << endl;
			}
		}
		else
		{
			for (int i = 0; i < k; i++)
			{
				for (int i = 0; i < n; i++)
				{
					if (i % 2 == 0) for (int j = 0; j < k; j++) cout << "  ";
					else for (int j = 0; j < k; j++) cout << "#" << "#";

				}
				cout << endl;
			}
		}
	}
#endif // BOX

	
}