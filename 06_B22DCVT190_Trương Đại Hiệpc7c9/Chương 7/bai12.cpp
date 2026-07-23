#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Nhap xau: ";
    getline(cin, s);

    // Chèn chu?i
    s.insert(0, "Hello ");

    cout << "Sau khi chen:\n";
    cout << s << endl;

    // Thay th?
    s.replace(0, 5, "Hi");

    cout << "Sau khi thay the:\n";
    cout << s;

    return 0;
}
