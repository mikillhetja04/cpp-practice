#include <bits/stdc++.h>
using namespace std;

float S_hinh_tru(float r, float l){
    return 2 * M_PI * r * l;
}
int main(){
    float r,l;
    cin >> r >> l;
    cout << S_hinh_tru(r, l) << endl;
}