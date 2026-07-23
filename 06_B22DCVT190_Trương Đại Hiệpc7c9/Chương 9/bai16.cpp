#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    string hoTen;
    string gioiTinh;
    string danToc;
    string queQuan;
    float heSoLuong;
    string chucVu;
};

int main() {
    int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;
    cin.ignore();

    NhanVien a[100];

    for (int i = 0; i < n; i++) {
        cout << "\nNhan vien " << i + 1 << endl;

        cout << "Ho ten: ";
        getline(cin, a[i].hoTen);

        cout << "Gioi tinh: ";
        getline(cin, a[i].gioiTinh);

        cout << "Dan toc: ";
        getline(cin, a[i].danToc);

        cout << "Que quan: ";
        getline(cin, a[i].queQuan);

        cout << "He so luong: ";
        cin >> a[i].heSoLuong;
        cin.ignore();

        cout << "Chuc vu: ";
        getline(cin, a[i].chucVu);
    }

    cout << "\nNhan vien co he so luong > 3.66:\n";

    for (int i = 0; i < n; i++) {
        if (a[i].heSoLuong > 3.66) {
            cout << a[i].hoTen << " - "
                 << a[i].heSoLuong << endl;
        }
    }

    return 0;
}
