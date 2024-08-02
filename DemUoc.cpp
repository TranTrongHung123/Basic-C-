#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

ll mark[1000001] = {0};

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	for(ll i = 0; i < n; i++){
		++mark[a[i]];
	}
	ll s = 1;
	for(ll i = 0; i < n; i++){
		if(mark[a[i]] != 0){
			s *= (mark[a[i]] + 1);
			s %= mod;
			mark[a[i]] = 0;
		}
	}
	cout << s;
}
