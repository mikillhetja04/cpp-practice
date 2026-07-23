#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Nhap so thu nhat: ";
    cin >> s1;

    cout << "Nhap so thu hai: ";
    cin >> s2;

    long long a = stoll(s1);
    long long b = stoll(s2);

    cout << "Tong = " << a + b;

    return 0;
}
