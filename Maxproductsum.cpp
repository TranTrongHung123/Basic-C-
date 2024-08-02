#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += 1ll * i * a[i];
		sum %= mod;
	}	
	cout << sum;
}
