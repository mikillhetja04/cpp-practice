#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double chuvi = a + b + c;
    double dientich = sqrt(chuvi/2 * (chuvi/2 - a) * (chuvi/2 - b) * (chuvi/2 - c));
    double bankinhduongtronngoaitiep = (a * b * c) / (4 * dientich);
    double bankinhduongtronnoitiep = dientich / (chuvi/2);
    cout << chuvi << " " << dientich << " " << bankinhduongtronngoaitiep << " " << bankinhduongtronnoitiep;
    return 0;
}