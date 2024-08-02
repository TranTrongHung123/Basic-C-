#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    map<ll,ll> hop, giao;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        hop[a[i]] = 1;
        giao[a[i]] = 1;
    }
    for(ll i = 0; i < m; i++){
        cin >> b[i];
        if(giao[b[i]] == 1){
            giao[b[i]] = 2;
        }
        hop[b[i]] = 1;
    }
    for(auto x : hop){
        cout << x.first << " ";
    } 

    cout << endl;
    for(auto x : giao){
        if(x.second == 2){
            cout << x.first << " ";
        }
    }  
}
