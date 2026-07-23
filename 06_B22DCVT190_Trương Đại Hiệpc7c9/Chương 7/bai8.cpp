#include <iostream>
using namespace std;

int doDai(char s[]) {
    int dem = 0;
    while (s[dem] != '\0')
        dem++;
    return dem;
}

int main() {
    char s[1000];

    cout << "Nhap xau: ";
    cin.getline(s, 1000);

    cout << "Do dai = " << doDai(s);

    return 0;
}
