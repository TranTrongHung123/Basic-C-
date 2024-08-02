#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	ll cnt = 0;
	ll min = 1e18;
	sort(a, a + n);
	for(ll i = 0; i < n-1; i++){
		if(abs(a[i] - a[i+1]) < min){
			min = abs(a[i] - a[i+1]);
		}
	}	
	for(ll i = 0; i < n-1; i++){
		if(abs(a[i] - a[i+1]) == min){
			++cnt;
		}
	}	
	cout << min << " " << cnt;
}
