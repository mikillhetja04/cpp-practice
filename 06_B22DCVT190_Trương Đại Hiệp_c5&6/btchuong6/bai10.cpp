#include <iostream>
#include <cmath>
using namespace std;
bool soNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Cac so nguyen to: ";
    for (int i = 0; i < n; i++)
        if (soNguyenTo(a[i]))
            cout << a[i] << " ";
    return 0;
}
