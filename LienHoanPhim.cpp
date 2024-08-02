#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll cmp(pair<ll,ll> a, pair<ll,ll> b){
	if(a.second != b.second){
		return a.second < b.second;
	}
	else{
		return a.first < b.first;
	}
}

int main(){
	ll n;
	cin >> n;
	pair<ll,ll> pr[n];
	for(ll i = 0; i < n; i++){
		cin >> pr[i].first >> pr[i].second;
	}
	sort(pr, pr+n, cmp);
	ll cnt = 1, res = pr[0].second;
	for(ll i = 1; i < n; i++){
		if(pr[i].first >= res){
			res = pr[i].second;
			++cnt;
		}
	}
	cout << cnt;
}
