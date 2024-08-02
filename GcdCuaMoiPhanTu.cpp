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
	ll s = a[0];
	for(ll i = 1; i < n; i++){
		s = __gcd(s, a[i]);
	}
	cout << s;
}
