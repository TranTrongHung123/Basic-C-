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
	ll sum = 0;
	for(ll i = 0; i < n; i++){
		sum += i * a[i];
		sum %= mod;
	}
	cout << sum;
}
