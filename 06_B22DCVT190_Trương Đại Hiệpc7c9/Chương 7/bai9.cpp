#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Nhap xau: ";
    getline(cin, s);

    // Xóa kho?ng tr?ng ð?u
    while (!s.empty() && s.front() == ' ')
        s.erase(0, 1);

    // Xóa kho?ng tr?ng cu?i
    while (!s.empty() && s.back() == ' ')
        s.pop_back();

    // Xóa kho?ng tr?ng th?a gi?a các t?
    for (int i = 0; i < s.length() - 1; ) {
        if (s[i] == ' ' && s[i + 1] == ' ')
            s.erase(i, 1);
        else
            i++;
    }

    cout << "Xau sau khi chuan hoa:\n";
    cout << s;

    return 0;
}
