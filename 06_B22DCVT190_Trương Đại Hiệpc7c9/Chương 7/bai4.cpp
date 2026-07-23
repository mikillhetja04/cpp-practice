#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>
using namespace std;

int main() {
    srand(time(NULL));

    int x = rand() % 128;

    cout << "Ma ASCII: " << x << endl;
    cout << "Ky tu: " << char(x) << endl;

    if (islower(x))
        cout << "Ky tu thuong";
    else if (isupper(x))
        cout << "Ky tu hoa";
    else if (isdigit(x))
        cout << "Ky tu so";
    else
        cout << "Ky tu dac biet";

    return 0;
}
