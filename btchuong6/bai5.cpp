#include <bits/stdc++.h>
using namespace std;


void nhap(int a[], int &n){
    int i;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
}
int timMax(int a[], int n){
    int max = a[0];
    for (int i = 1; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    int max = timMax(a,n);
    cout << max;
}