#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll degree(ll n, ll p){
	ll s = 0;
	for(ll i = p; i <= n; i *= p){
		s += n/i;
	}
	return s;
}

int main(){
	ll n, p;
	cin >> n >> p;
	cout << degree(n,p);
}
