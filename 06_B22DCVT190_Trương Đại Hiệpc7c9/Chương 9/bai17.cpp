#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    string gioiTinh;
    string danToc;
    int namSinh;
};

int main() {
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    cin.ignore();

    SinhVien sv[100];

    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien " << i + 1 << endl;

        cout << "Ma SV: ";
        getline(cin, sv[i].maSV);

        cout << "Ho ten: ";
        getline(cin, sv[i].hoTen);

        cout << "Gioi tinh: ";
        getline(cin, sv[i].gioiTinh);

        cout << "Dan toc: ";
        getline(cin, sv[i].danToc);

        cout << "Nam sinh: ";
        cin >> sv[i].namSinh;
        cin.ignore();
    }

    cout << "\nDanh sach sinh vien nu dan toc Nung:\n";

    for (int i = 0; i < n; i++) {
        if (sv[i].gioiTinh == "Nu" && sv[i].danToc == "Nung") {
            cout << sv[i].maSV << " "
                 << sv[i].hoTen << " "
                 << sv[i].namSinh << endl;
        }
    }

    return 0;
}
