#include <iostream>
#include <string>
using namespace std;

struct NgayThang {
    int ngay;
    int thang;
    int nam;
};

struct SinhVien {
    string maSo;
    string hoTen;
    NgayThang ngaySinh;
    string gioiTinh;
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

        cout << "Ngay sinh (ngay thang nam): ";
        cin >> sv[i].ngaySinh.ngay
            >> sv[i].ngaySinh.thang
            >> sv[i].ngaySinh.nam;
        cin.ignore();

        cout << "Gioi tinh: ";
        getline(cin, sv[i].gioiTinh);

        cout << "Diem TB: ";
        cin >> sv[i].diemTB;
        cin.ignore();
    }

    cout << "\nDanh sach sinh vien nam sinh nam 1998:\n";

    for (int i = 0; i < n; i++) {
        if (sv[i].gioiTinh == "Nam" && sv[i].ngaySinh.nam == 1998) {
            cout << sv[i].maSo << " "
                 << sv[i].hoTen << " "
                 << sv[i].ngaySinh.ngay << "/"
                 << sv[i].ngaySinh.thang << "/"
                 << sv[i].ngaySinh.nam << endl;
        }
    }

    return 0;
}
