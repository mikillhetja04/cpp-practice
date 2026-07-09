#include <iostream>
#include <cmath>
using namespace std;
 int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        cout<< abs(y) << " " << pow(x,abs(y)) << endl;
        
    }
    return 0;
 }