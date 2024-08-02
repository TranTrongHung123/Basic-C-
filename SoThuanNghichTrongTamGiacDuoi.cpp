#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n){
	ll tmp = n, s = 0;
	while(n){
		s = 10*s + n%10;
		n /= 10;
	}
	if(tmp == s) return true;
	return false;
}

int main(){
	ll n;
	cin >> n;
	ll a[n][n];
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	ll cnt = 0;
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < n; j++){
			if(j <= i){
				if(check(a[i][j])){
					++cnt;
				}				
			}
		}
	}	
	cout << cnt;
}
