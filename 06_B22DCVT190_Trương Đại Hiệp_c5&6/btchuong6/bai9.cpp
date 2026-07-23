#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxLen = 0;
    int start = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (j + k < n && a[i + k] == a[j + k])
                k++;
            if (k > maxLen) {
                maxLen = k;
                start = i;
            }
        }
    }
    if (maxLen == 0)
        cout << "Khong co doan lap.";
    else {
        cout << "Doan lap dai nhat:\n";
        for (int i = start; i < start + maxLen; i++)
            cout << a[i] << " ";
    }
    return 0;
}
