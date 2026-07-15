#include <bits/stdc++.h>
using namespace std;

int main() {
    double goc;
    cin >> goc;

    if (goc < 90)
        cout << "Goc nhon";
    else if (goc == 90)
        cout << "Goc vuong";
    else
        cout << "Goc tu";

    return 0;
}