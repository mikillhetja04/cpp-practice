#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;

    if (a > b) {
        cin >> c;
        cout << (a - b) * c;
    } else {
        cout << a * b;
    }

    return 0;
}