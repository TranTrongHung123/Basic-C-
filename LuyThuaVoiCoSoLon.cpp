#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

ll luythua(ll a, ll b){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= mod;
		}
		b /= 2;
		a *= a;
		a %= mod;
	}
	return res;
}

int main(){
	string s;
	cin >> s;
	ll k;
	cin >> k;
	ll tmp = 0;
	for(int i = 0; i < s.size(); i++){
		tmp = 10 * tmp + (s[i] - '0');
		tmp %= mod;
	}
	cout << luythua(tmp,k);
}
