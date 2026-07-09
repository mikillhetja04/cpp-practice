#include <bits/stdc++.h>
using namespace std;

int main(){
    double R = 50;
    double C = 220*pow(10,-6);
    double E = 60;
    double t = 0.55;
    double V = E * exp(-t/(R*C))/R;
    cout << V;
    return 0;
}