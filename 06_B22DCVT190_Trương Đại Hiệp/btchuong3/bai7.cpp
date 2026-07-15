#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if (x > y && y != 0)
        cout << x / y;
    else
        cout << x * y;

    return 0;
}