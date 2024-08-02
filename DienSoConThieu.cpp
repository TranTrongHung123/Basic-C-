#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	set<ll> st;
	for(ll i = 0; i < n; i++){
		ll x;
		cin >> x;
		st.insert(x);
	}
	vector<ll> vt;
	for(auto x : st){
		vt.push_back(x);
	}
	ll cnt = 0;
	for(ll i = 1; i < vt.size(); i++){
		cnt += vt[i] - 1 - vt[i-1];
	}
	cout << cnt;
}
