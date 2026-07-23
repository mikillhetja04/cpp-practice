#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << "Gia tri lon nhat: " << max << endl;
    cout << "Gia tri nho nhat: " << min << endl;
    return 0;
}
