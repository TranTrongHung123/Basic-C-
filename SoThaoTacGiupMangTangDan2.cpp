#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll n, d;
	cin >> n >> d;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	ll cnt = 0;
	for(ll i = 0; i < n-1; i++){
		if(a[i] >= a[i+1]){
			ll t = (a[i] - a[i+1]) / d + 1;
			cnt += t;
			a[i+1] += d * t;
		}
	}
	cout << cnt;
}
