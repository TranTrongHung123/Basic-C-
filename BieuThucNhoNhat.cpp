#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll a, ll b){
	return a > b;
}

int main(){
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n, cmp);
	ll sum = 0;
	for(ll i = 1; i <= k; i++){
		sum += a[i];
	}
	for(ll i = k+1; i < n; i++){
		sum -= a[i];
	}
	cout << sum;
}
