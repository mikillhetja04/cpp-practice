#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    char c;

    cout << "Nhap xau (ket thuc bang dau cham .): ";

    while (cin.get(c) && c != '.')
        s += c;

    for (int i = 0; i < s.length(); i++)
        s[i] = toupper(s[i]);

    cout << "Xau sau khi chuan hoa:\n";
    cout << s;

    return 0;
}
