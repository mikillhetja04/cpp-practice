#include <iostream>
using namespace std;
int main()
{
    int n;
    double a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Cac bo ba co tong > 100:\n";
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (a[i] + a[j] + a[k] > 100)
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
    return 0;
}
