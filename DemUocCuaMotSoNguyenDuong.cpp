#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll t;
	cin >> t;
	ll s = 1;
	while(t--){
		ll p, e;
		cin >> p >> e;
		s = ((s % 1000000007) * ((e+1) % 1000000007)) % 1000000007;
	}
	cout << s;
}
