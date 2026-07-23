#include <iostream>
#include <cmath>
using namespace std;

bool ChinhPhuong(int n) {
    if (n < 0) return false;
    int t = sqrt(n);
    return t * t == n;
}

int main() {
    int *a = new int[10];
    int dem = 0, tong = 0;

    cout << "Nhap 10 so nguyen:\n";
    for (int i = 0; i < 10; i++)
        cin >> *(a + i);

    cout << "Cac so chinh phuong: ";

    for (int i = 0; i < 10; i++) {
        if (ChinhPhuong(*(a + i))) {
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
