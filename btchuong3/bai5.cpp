#include <bits/stdc++.h>
using namespace std;

int main() {
    double t;
    cin >> t;

    if (t < 100)
        cout << "Nho hon nhiet do soi cua nuoc";
    else if (t == 100)
        cout << "Bang nhiet do soi cua nuoc";
    else
        cout << "Lon hon nhiet do soi cua nuoc";

    return 0;
}