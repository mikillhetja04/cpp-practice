#include <iostream>
#include <cmath>
using namespace std;

bool NguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int *a = new int[10];
    int dem = 0, tong = 0;

    cout << "Nhap 10 so nguyen:\n";
    for (int i = 0; i < 10; i++)
        cin >> *(a + i);

    cout << "Cac so nguyen to: ";

    for (int i = 0; i < 10; i++) {
        if (NguyenTo(*(a + i))) {
            cout << *(a + i) << " ";
            dem++;
            tong += *(a + i);
        }
    }

    cout << "\nSo luong = " << dem;
    cout << "\nTong = " << tong;

    delete[] a;
    return 0;
}
