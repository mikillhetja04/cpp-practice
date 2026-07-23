#include <iostream>
using namespace std;

// Hàm tính UCLN
int ucln(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm tính BCNN
int bscnn(int a, int b)
{
    return a * b / ucln(a, b);
}

int main()
{
    int x, y;

    cout << "Nhap x: ";
    cin >> x;

    cout << "Nhap y: ";
    cin >> y;

    cout << "BCNN = " << bscnn(x, y);

    return 0;
}