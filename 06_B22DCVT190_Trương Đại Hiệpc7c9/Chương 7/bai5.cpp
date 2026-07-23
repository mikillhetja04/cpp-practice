#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Nhap xau: ";
    getline(cin, s);

    cout << "Ma Hexa:" << endl;

    for (int i = 0; i < s.length(); i++)
        cout << s[i] << " : "
             << uppercase << hex << (int)(unsigned char)s[i] << endl;

    return 0;
}
