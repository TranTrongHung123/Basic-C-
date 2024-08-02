#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n, m, a;
	cin >> n >> m >> a;
	ll x1 = ((n + a - 1)/a*a)/a;
	ll x2 = ((m + a - 1)/a*a)/a;
	ll x = x1*x2;
	cout << x;	
}
