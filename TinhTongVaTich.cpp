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
	ll s = 0, t = 1;
	for(ll i = 0; i < n; i++){
		s += a[i];
		s %= mod;
		t *= a[i];
		t %= mod;
	}	
	cout << s << endl << t;
}
