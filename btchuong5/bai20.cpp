#include <bits/stdc++.h>
using namespace std;

void chan_le(int n){
    if(n%2==0)
        cout << n << " la so chan" << endl;
    else
        cout << n << " la so le" << endl;
}
int main(){
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    chan_le(n);
    return 0;
}
