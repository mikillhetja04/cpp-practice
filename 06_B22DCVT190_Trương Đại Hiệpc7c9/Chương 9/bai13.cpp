#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string maSo, hoTen, ngaySinh, gioiTinh;
    float diemTB;
};

int main() {
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    cin.ignore();

    SinhVien sv[100];

    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien " << i + 1 << endl;

        cout << "Ma so: ";
        getline(cin, sv[i].maSo);

        cout << "Ho ten: ";
        getline(cin, sv[i].hoTen);

        cout << "Ngay sinh: ";
        getline(cin, sv[i].ngaySinh);

        cout << "Gioi tinh: ";
        getline(cin, sv[i].gioiTinh);

        cout << "Diem TB: ";
        cin >> sv[i].diemTB;
        cin.ignore();
    }

    cout << "\nDanh sach sinh vien nu dat loai gioi:\n";

    for (int i = 0; i < n; i++) {
        if (sv[i].gioiTinh == "Nu" && sv[i].diemTB >= 8.5) {
            cout << sv[i].maSo << " "
                 << sv[i].hoTen << " "
                 << sv[i].diemTB << endl;
        }
    }

    return 0;
}
