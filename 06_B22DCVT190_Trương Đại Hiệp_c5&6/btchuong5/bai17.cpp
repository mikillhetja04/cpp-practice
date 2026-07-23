#include <bits/stdc++.h>
using namespace std;

double dem_giay(int h, int m, int s, int &tong_giay)
{
    tong_giay = h * 3600 + m * 60 + s;
    return tong_giay;
}
int main(){
    int h, m, s, tong_giay;
    cout << "Nhap gio: ";
    cin >> h;
    cout << "Nhap phut: ";
    cin >> m;
    cout << "Nhap giay: ";
    cin >> s;
    dem_giay(h, m, s, tong_giay);
    cout << "Tong so giay: " << tong_giay << endl;
    return 0;
}