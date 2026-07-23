#include <bits/stdc++.h>
using namespace std;

void flow(double u, double p, double d, double &vl, double &vt){
    vl = 2100*u/(p*d);
    vt = 4000*u/(p*d);
}
int main(){
    double u, p, d, vl, vt;
    cin >> u >> p >> d;
    flow(u, p, d, vl, vt);
    cout << "Van toc laminar: " << vl << endl;
    cout << "Van toc turbulent: " << vt << endl;
}