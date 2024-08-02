#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll a, ll b){
	return a > b;
}

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	ll res = 0;
	for(ll i = 0; i < n; i++){
		if((a[i] - i) > 0){
			res += (a[i] - i);
		}
	}
	cout << res;
}
