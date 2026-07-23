#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (abs(a[i]) > abs(a[j]))
                swap(a[i], a[j]);
    cout << "Day sau khi sap xep:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
