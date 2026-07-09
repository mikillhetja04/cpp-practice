#include <iostream>
#include <cmath> // Bắt buộc phải có để dùng hàm sqrt

using namespace std;    

int main(){
    double a, b, c;
    if (cin >> a >> b >> c) {
        // Kiểm tra điều kiện tồn tại tam giác
        if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
            double nuachuvi = (a + b + c) / 2;
            double dientich = sqrt(nuachuvi * (nuachuvi - a) * (nuachuvi - b) * (nuachuvi - c));
            
            cout << nuachuvi * 2 << " " << dientich;
        } else {
            cout << "Ba canh khong hop le!";
        }
    }
    return 0;
}