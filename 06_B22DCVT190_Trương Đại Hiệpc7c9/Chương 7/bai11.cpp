#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, tu;

    cout << "Nhap xau: ";
    getline(cin, s);

    cout << "Nhap tu can tim: ";
    getline(cin, tu);

    int pos = s.find(tu);

    if (pos != string::npos)
        cout << "Tim thay tai vi tri: " << pos;
    else
        cout << "Khong tim thay.";

    return 0;
}
