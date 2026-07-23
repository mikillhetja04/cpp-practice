#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    for (int i = 0; i < n - 1; i += 2)
        swap(a[i], a[i + 1]);
    cout << "Day dang song:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
