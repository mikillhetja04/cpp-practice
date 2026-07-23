#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;

    cout << "Nhap xau: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);

    cout << "Xau sau khi chuyen:\n";
    cout << s;

    return 0;
}
