#include <bits/stdc++.h>
using namespace std;

int main(){
    double t = 0.32;
    double E =15;
    double R = 8100;
    double C = 17*pow(10,-6);
    double i = (E/R) * exp(-t/(R*C));
    cout << i;
    return 0;
}