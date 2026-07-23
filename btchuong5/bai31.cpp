#include <iostream>
using namespace std;

void change(int money,
            int &hundreds,
            int &fifties,
            int &twenties,
            int &tens,
            int &fives,
            int &ones)
{
    hundreds = money / 100000;
    money %= 100000;

    fifties = money / 50000;
    money %= 50000;

    twenties = money / 20000;
    money %= 20000;

    tens = money / 10000;
    money %= 10000;

    fives = money / 5000;
    money %= 5000;

    ones = money / 1000;
}

int main()
{
    int money;
    int hundreds, fifties, twenties, tens, fives, ones;

    cout << "Nhap so tien: ";
    cin >> money;

    change(money,
           hundreds,
           fifties,
           twenties,
           tens,
           fives,
           ones);

    cout << "100000: " << hundreds << endl;
    cout << "50000 : " << fifties << endl;
    cout << "20000 : " << twenties << endl;
    cout << "10000 : " << tens << endl;
    cout << "5000  : " << fives << endl;
    cout << "1000  : " << ones << endl;

    return 0;
}