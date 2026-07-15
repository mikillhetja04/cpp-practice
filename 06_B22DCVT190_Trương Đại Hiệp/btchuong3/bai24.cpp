#include <bits/stdc++.h>
using namespace std;

int main(){
    double a1,a2,b1,b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    double D = a1 * b2 - a2 * b1;
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    if(D == 0){
        if(Dx == 0 && Dy == 0){
            cout << "He phuong trinh co vo so nghiem";
        }
        else{
            cout << "He phuong trinh vo nghiem";
        }
    }
    else{
        double x = Dx / D;
        double y = Dy / D;
        cout << "Nghiem cua he phuong trinh la: " << x << " " << y;
    }
}