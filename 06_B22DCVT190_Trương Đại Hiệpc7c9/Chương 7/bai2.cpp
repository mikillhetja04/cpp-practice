#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);

    cout << "Xau dao nguoc: ";
    for (int i = s.length() - 1; i >= 0; i--)
        cout << s.at(i);

    return 0;
}
