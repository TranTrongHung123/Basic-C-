#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll mp[5] = {0};
	for(ll i = 0; i < n; i++){
		ll x;
		cin >> x;
		++mp[x];
	}
	ll res = mp[4] + mp[3] + mp[2] / 2 ;
	mp[1] = mp[1] > mp[3] ? mp[1] - mp[3] : 0;
	mp[2] %= 2;
	if(mp[2] > 0){
		res += 1;
		mp[1] = mp[1] > 2 ? mp[1] - 2 : 0;
	}
	if(mp[1] > 0){
		res += mp[1] / 4;
	}
	mp[1] %= 4;
	if(mp[1]){
		++res;
	}
	cout << res;
}
