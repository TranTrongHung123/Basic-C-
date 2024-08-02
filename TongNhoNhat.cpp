#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long ll;

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	vector<ll> x;
	for(ll i = 0; i < n; i++){
		if(a[i] != 0){
			x.push_back(a[i]);
		}
	}	
	ll x1 = 0, x2 = 0;
	for(ll i = 0; i < x.size(); i++){
		if(i % 2 == 0){
			x1 = 10*x1 + x[i];
		}
		else{
			x2 = 10*x2 + x[i];
		}	
	}
	cout << x1 + x2;
}
