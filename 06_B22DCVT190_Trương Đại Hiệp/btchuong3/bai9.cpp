#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if (fabs(x - y) < 0.00005)
        cout << "Sai so = 0";
    else
        cout << "Sai so = " << fabs(x - y) / 2;

    return 0;
}