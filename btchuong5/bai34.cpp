#include <iostream>
using namespace std;

double do_vong(double L, bool namNgang)
{
    if (namNgang)
        return L / 240.0;
    return L / 180.0;
}

int main()
{
    double L;
    int chon;

    cout << "Nhap chieu dai L: ";
    cin >> L;

    cout << "1. Ram nam ngang\n";
    cout << "2. Ram dat cheo\n";
    cout << "Chon: ";
    cin >> chon;

    if (chon == 1)
        cout << "Do vong toi da: " << do_vong(L, true);
    else
        cout << "Do vong toi da: " << do_vong(L, false);

    return 0;
}