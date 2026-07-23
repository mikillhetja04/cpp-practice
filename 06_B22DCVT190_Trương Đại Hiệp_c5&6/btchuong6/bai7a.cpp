#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Day vua nhap: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    int maxCong = 2, startCong = 0, len = 2;
    for (int i = 2; i < n; i++) {
        if (a[i] - a[i - 1] == a[i - 1] - a[i - 2])
            len++;
        else
            len = 2;
        if (len > maxCong) {
            maxCong = len;
            startCong = i - len + 1;
        }
    }
    cout << "\nDay cap so cong dai nhat: ";
    for (int i = startCong; i < startCong + maxCong; i++)
        cout << a[i] << " ";
    int maxNhan = 2, startNhan = 0;
    len = 2;
    for (int i = 2; i < n; i++) {
        if (a[i - 2] != 0 && a[i - 1] != 0 &&
            a[i] * a[i - 2] == a[i - 1] * a[i - 1])
            len++;
        else
            len = 2;
        if (len > maxNhan) {
            maxNhan = len;
            startNhan = i - len + 1;
        }
    }
    cout << "\nDay cap so nhan dai nhat: ";
    for (int i = startNhan; i < startNhan + maxNhan; i++)
        cout << a[i] << " ";
    return 0;
}
