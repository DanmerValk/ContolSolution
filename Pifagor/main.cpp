#include<iostream>
using namespace std;
//#define PIFAGOR
//#define PIFAGOR_2
void main()
{
	setlocale(LC_ALL, "ru");
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
    int i, j;

    for (i = 1; i < 10; i++) 
    {

        for (j = 1; j < 10; j++)

            printf("%4d", i * j);

        printf("\n");

    }

}