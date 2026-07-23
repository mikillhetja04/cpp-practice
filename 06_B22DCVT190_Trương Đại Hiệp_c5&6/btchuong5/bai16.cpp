#include <bits/stdc++.h>
using namespace std;

double S_tam_giac(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main(){
    double a, b, c, s;
    cout << "Nhap ba canh cua tam giac: ";
    cin >> a >> b >> c;
    s = S_tam_giac(a, b, c);
    cout << "Dien tich tam giac: " << s << endl;
    return 0;
}