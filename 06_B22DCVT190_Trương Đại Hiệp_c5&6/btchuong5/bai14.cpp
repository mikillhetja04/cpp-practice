#include <bits/stdc++.h>
using namespace std;

void S_V_hinhtron(float r, float &s, float &v)
{
    s = 2 * M_PI * r;
    v = M_PI * r * r;
    

}
int main(){
    float r, s, v;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;
    S_V_hinhtron(r, s, v);
    cout << "Chu vi hinh tron: " << s << endl;
    cout << "Dien tich hinh tron: " << v << endl;
    return 0;
}