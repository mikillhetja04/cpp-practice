#include <bits/stdc++.h>
using namespace std;    

double r_hinh_tron(double chu_vi)
{
    return chu_vi / (2 * M_PI);
}
double S_hinhtron(double r)
{
    return M_PI * r * r;
}
int main(){
    double chu_vi, r, s;
    cout << "Nhap chu vi hinh tron: ";
    cin >> chu_vi;
    r = r_hinh_tron(chu_vi);
    s = S_hinhtron(r);
    cout << "Ban kinh hinh tron: " << r << endl;
    cout << "Dien tich hinh tron: " << s << endl;
    return 0;
}