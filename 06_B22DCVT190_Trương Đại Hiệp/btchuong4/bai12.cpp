#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    long long f0 = 1, f1 = 1, fn;
    if(n == 1){
        cout << f0;
    }
    else if(n == 2){
        cout << f0 << " " << f1;
    }
    else{
        cout << f0 << " " << f1;
        for(int i = 3; i <= n; i++){
            fn = f0 + f1;
            cout << " " << fn;
            f0 = f1;
            f1 = fn;
        }
    }
    
}
int main(){
    int n;
    cin >> n;
    fibonacci(n);
}