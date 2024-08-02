#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++){
        cin >> b[i];
    }    
    ll s = 0;
    sort(a, a+n);
    sort(b, b+n);    
    for(ll i = 0; i < n; i++){
        s += a[i] * b[i];
    }    
    cout << s;
}
