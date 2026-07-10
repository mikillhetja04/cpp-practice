#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double s = 0;
    double tong = 0;
    for(int i =1 ; i <= n; i++){
        tong += i* i;
        s += 1.0 / tong;
    }
    cout << s;
}