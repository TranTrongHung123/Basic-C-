#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
	return a.first < b.first;
}

int main(){
	ll n;
	cin >> n;
	pair<ll,ll> a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n, cmp);
	ll end = a[0].first + a[0].second;
	for(ll i = 1; i < n; i++){
		ll res = max(end, a[i].first);
		end = res + a[i].second;
	}
	cout << end;
}
