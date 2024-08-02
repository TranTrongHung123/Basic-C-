#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	ll k;
	cin >> k;
	ll res = 0;
	for(int i = 0; i < s.size(); i++){
		res = 10*res + (s[i] - '0');
		res %= k;
	}
	cout << __gcd(k,res);
}
