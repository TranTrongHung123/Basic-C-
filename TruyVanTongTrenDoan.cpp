#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll a[n];
	ll prefixsum[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
		if(i == 0){
			prefixsum[i] = a[i];
		}
		else{
			prefixsum[i] = prefixsum[i-1] + a[i];
		}
	}
	ll q;
	cin >> q;
	while(q--){
		ll l, r;
		cin >> l >> r;
		--l;
		--r;
		if(l == 0){
			cout << prefixsum[r];
		}
		else{
			cout << prefixsum[r] - prefixsum[l-1];
		}
		cout << endl;
	}
}
