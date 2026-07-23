#include <iostream>
using namespace std;

double luy_thua(double x, int y)
{
    if (y == 0)
        return 1;

    return x * luy_thua(x, y - 1);
}

int main()
{
    double a;
    int b;

    cin >> a >> b;

    cout << luy_thua(a, b);

    return 0;
}