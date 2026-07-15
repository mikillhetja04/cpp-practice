#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;

    while (n > 1) {
        while (n % i == 0) {
            cout << i;
            n /= i;

            if (n > 1)
                cout << " * ";
        }
        i++;
    }

    return 0;
}