#include <bits/stdc++.h>
using namespace std;    

int main(){
    double s,a,n,d;
    // s la tong tu a den b;
    cin >> a >> n >> d;
    s = (n/2) * (2*a + (n-1)*d);
    cout << s;
    return 0;
}