#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double S = 0;
    int tong = 0;

    for (int i = 1; i <= n; i++) {
        tong += i;
        S += 1.0 / tong;
    }

    cout << S;

    return 0;
}