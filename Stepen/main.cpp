#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    double a;
    int n, i;
    double N = 1;
    cout << "������� ���������� � ������� �����: ";
    cin >> a;
    cout << endl << "������� ������� �����: ";
    cin >> n;
    if (n < 0)
    {
        a = 1 / a;
        n = -n;
    }
    for (i = 0; i < n; i++)
            N *= a;
    cout << endl << "���������: " << n << " ����� " << a << " = " << N << endl;
}