#include <bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin >> x;
    double f;
    if(x < 0){
        f = 0;
    }
    else if(x>2){
        f= x*x - x;
    }
    else{
        f = x*x - sin(M_PI * x*x);
    }
    cout << f;
}