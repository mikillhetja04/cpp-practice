#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string maSo;
    string hoTen;
    string ngaySinh;
    string gioiTinh;
    float diemTB;
};

int main() {
    SinhVien sv[5] = {
        {"K15001","David","12/02/1997","Nu",7.9},
        {"K15002","Linda","16/08/1998","Nam",2.5},
        {"K15003","Pieere","07/07/1997","Nu",6.3},
        {"K15004","Jain","06/09/1998","Nam",3.9},
        {"K15005","Vladimir","15/12/1997","Nu",8.7}
    };

    cout << "Danh sach sinh vien:\n";
    cout << "MaSo\tHoTen\tNgaySinh\tGioiTinh\tDiemTB\n";

    for(int i = 0; i < 5; i++) {
        cout << sv[i].maSo << "\t"
             << sv[i].hoTen << "\t"
             << sv[i].ngaySinh << "\t"
             << sv[i].gioiTinh << "\t\t"
             << sv[i].diemTB << endl;
    }

    return 0;
}
