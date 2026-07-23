#include <bits/stdc++.h>
using namespace std;

float V_hinh_tru(float r, float l){
    return M_PI * r * r * l;
}
int main(){
    float r,l;
    cin >> r >> l;
    cout << V_hinh_tru(r, l) << endl;
}