#include <bits/stdc++.h>
using namespace std;

void exe (float a, float b){
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    if (b != 0)
        cout << (float)a / b << endl;
    else
        cout << "Khong the chia cho 0" << endl;
}
int main(){
    float a, b;
    cin >> a >> b;
    exe(a, b);
}