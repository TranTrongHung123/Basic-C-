#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	while(b){
		ll r = a%b;
		a = b;
		b = r;
	}
	return a;
}

ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}

int main(){
	ll a, b;
	cin >> a >> b;
	cout << lcm(a,b) << " " << gcd(a,b);
}
