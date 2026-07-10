#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    int uscln = x;
    int bscnn = a * b / uscln;

    cout << "BSCNN = " << bscnn;

    return 0;
}