#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
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
}