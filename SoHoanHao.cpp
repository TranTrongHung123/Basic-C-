#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
	ll ok = 0;
    ll s = 1;
    ll x = sqrt(n);
    for(ll i = 2; i <= x; i++){
        if(n % i == 0){
            s += i;
            if(i != n/i){
                s += n/i;
            }            
        }
    }
    if(s == n){
    	ok = 1;
	}
	if(ok == 0){
		cout << "NO";
	}
	else{
		cout << "YES";
	}
}
