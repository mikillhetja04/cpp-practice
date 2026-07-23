#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Nhap xau thu nhat: ";
    getline(cin, s1);

    cout << "Nhap xau thu hai: ";
    getline(cin, s2);

    if (s1 == s2)
        cout << "Hai xau bang nhau";
    else if (s1 > s2)
        cout << "Xau thu nhat lon hon xau thu hai";
    else
        cout << "Xau thu nhat nho hon xau thu hai";

    return 0;
}
