#include <iostream>
using namespace std;

int main() {
    int *a = new int[10];
    int tong = 0, dem = 0;

    cout << "Nhap 10 so nguyen:\n";
    for (int i = 0; i < 10; i++)
        cin >> *(a + i);

    for (int i = 0; i < 10; i++) {
        if (*(a + i) % 2 == 0) {
            tong += *(a + i);
            dem++;
        }
    }

    if (dem != 0)
        cout << "Trung binh cong cac so chan = " << (float)tong / dem;
    else
        cout << "Khong co so chan.";

    delete[] a;
    return 0;
}
