#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mark[1000001];

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
		++mark[a[i]];
	}
	ll cnt = 0;
	for(ll i = 0; i <= 1000000; i++){
		if(mark[i] > 1){
			cnt += (mark[i]) * (mark[i] - 1) / 2;
		}	
	}
	cout << cnt;
}
