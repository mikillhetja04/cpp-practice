#include <bits/stdc++.h>
using namespace std;

int main() {
    double a1, q;
    int n;

    cin >> a1 >> q >> n;

    double an = a1 * pow(q, n - 1);

    cout << an;

    return 0;
}