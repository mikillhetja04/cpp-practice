#include <bits/stdc++.h>
using namespace std;

int main() {
    double r;

    cin >> r;

    while (r <= 0) {
        cout << "Nhap lai r: ";
        cin >> r;
    }

    double V = 4.0 / 3.0 * M_PI * r * r * r;
    cout << V;

    return 0;
}