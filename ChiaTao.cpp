#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, b[100], ok;

void ktao(){
	for(ll i = 1; i <= n; i++){
		b[i] = 0;
	}
}

void sinh(){
	ll i = n;
	while(i >= 1 && b[i] == 1){
		b[i] = 0;
		--i;
	}
	if(i == 0){
		ok = false;
	}
	else{
		b[i] = 1;
	}
}

int main(){
	cin >> n;
	ll a[100];
	for(ll i = 1; i <= n; i++){
		cin >> a[i];
	}
	ll res = 1e18;
	ktao();
	ok = true;
	while(ok){
		ll s1 = 0, s2 = 0;
		for(ll i = 1; i <= n; i++){
			if(b[i] == 0){
				s2 += a[i];
			}
			else{
				s1 += a[i];
			}
		}
		if(abs(s2-s1) < res){
			res = abs(s2-s1);
		}
		sinh();
	}
	cout << res;
}
