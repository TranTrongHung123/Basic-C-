#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	ll sum = 0;
	for(ll i = 0; i < k; i++){
		sum += a[i];
	}
	ll res = sum, pos = 0;
	for(ll i = 1; i <= n-k; i++){
		sum = sum - a[i-1] + a[i+k-1];
		if(sum > res){
			res = sum;
			pos = i;
		}
	}
	cout << res << "\n";
	for(ll i = pos; i < pos + k; i++){
		cout << a[i] << " ";
	}
}
