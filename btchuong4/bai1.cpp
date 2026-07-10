#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int count = 0;
    int i = 1;

    while (i < n) {
        if (i % 7 == 0) {
            sum += i;
            count++;
        }
        i++;
    }

    if (count == 0)
        cout << "Khong co so chia het cho 7";
    else
        cout << (double)sum / count;

    return 0;
}