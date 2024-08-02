#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll s1 = 0, s2 = 0;
    if(k < (n-k)){
        sort(a, a+n);
        for(int i = 0; i < k; i++){
            s1 += a[i];
        }
        for(int i = k; i < n; i++){
            s2 += a[i];
        }
    }
    else{
        sort(a, a+n, greater<int>());
        for(int i = 0; i < k; i++){
            s2 += a[i];
        }
        for(int i = k; i < n; i++){
            s1 += a[i];
        }        
    }
    cout << s2 - s1;
}
