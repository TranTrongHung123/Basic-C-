#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	ll cnt = 0;
	for(ll i = 0; i < n-1; i++){
		if(a[i+1] <= a[i]){
			ll d = a[i] - a[i+1] + 1;
			cnt += d;
			a[i+1] += d;
		}
	}
	cout << cnt;
}
