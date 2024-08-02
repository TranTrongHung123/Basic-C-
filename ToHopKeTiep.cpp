#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[1005];
    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }
    int i = k;
    int ok = true;
    while(i >= 1 && a[i] == n-k+i){
        --i;
    }
    if(i == 0){
        ok = false;
    }
    else{
        ++a[i];
        for(int j = i+1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
    }
    if(ok == true){
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
    }
    else{
        for(int i = 1; i <= k; i++){
            cout << i << " ";
        }
    }
}
