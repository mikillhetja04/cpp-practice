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

    for(int i = 0; i < n; i++) {
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

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(sv[i].diemTB < sv[j].diemTB)
                swap(sv[i], sv[j]);

    cout << "\nDanh sach sau sap xep:\n";

    for(int i = 0; i < n; i++)
        cout << sv[i].maSo << " "
             << sv[i].hoTen << " "
             << sv[i].diemTB << endl;

    return 0;
}
