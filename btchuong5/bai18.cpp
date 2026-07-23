#include <iostream>
#include <cmath>
using namespace std;

double Sqrt(double a)
{
    if (a < 0) return -1;
    if (a == 0) return 0;

    double x = a;
    double x_old;
    const double e = 1e-6;

    do
    {
        x_old = x;
        x = (x_old + a / x_old) / 2;
    }
    while (fabs(x - x_old) >= e);

    return x;
}

int main()
{
    double a;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Can bac hai = " << Sqrt(a);

    return 0;
}