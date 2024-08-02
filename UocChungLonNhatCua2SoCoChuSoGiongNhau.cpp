#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll a, x, y;
	cin >> a >> x >> y;
	for(ll i = 1; i <= __gcd(x,y); i++){
		cout << a;
	}
}
