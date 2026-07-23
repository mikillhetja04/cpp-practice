#include <iostream>
#include <cmath>
using namespace std;
bool chinhPhuong(int n)
{
    if (n < 0)
        return false;
    int x = sqrt(n);
    return x * x == n;
}
int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Cac so chinh phuong: ";
    for (int i = 0; i < n; i++)
        if (chinhPhuong(a[i]))
            cout << a[i] << " ";
    return 0;
}
