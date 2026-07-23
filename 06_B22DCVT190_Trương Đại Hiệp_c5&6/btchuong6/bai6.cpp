#include <iostream>
using namespace std;
int main() {
    int n, a[100], x;
    int dem = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Nhap X: ";
    cin >> x;
    cout << "Vi tri tim thay: ";
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i << " ";
            dem++;
        }
    }
    if (dem == 0)
        cout << "Khong tim thay";
    else
        cout << "\nSo lan tim thay: " << dem;
    return 0;
}
