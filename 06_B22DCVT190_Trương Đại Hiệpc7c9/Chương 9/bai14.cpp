#include <iostream>
using namespace std;

struct NgayThang {
    int ngay;
    int thang;
    int nam;
};

int main() {
    NgayThang nt;

    cout << "Nhap ngay: ";
    cin >> nt.ngay;

    cout << "Nhap thang: ";
    cin >> nt.thang;

    cout << "Nhap nam: ";
    cin >> nt.nam;

    cout << "Ngay sinh: "
         << nt.ngay << "/"
         << nt.thang << "/"
         << nt.nam;

    return 0;
}
