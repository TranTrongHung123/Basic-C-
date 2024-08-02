#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f[100];

ll fibo(ll n){
	f[0] = 0;
	f[1] = 1;
	for(ll i = 2; i <= 92; i++){
		f[i] = f[i-1] + f[i-2];
	}
	for(ll i = 0; i <= 92; i++){
		if(f[i] == n){
			return 1;
		}
	}
	return 0;
}

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	ll ok = 0;
	for(ll i = 0; i < n; i++){
		if(fibo(a[i])){
			ok = 1;
			break;
		}
	}
	if(ok == 1){
		for(ll i = 0; i < n; i++){
			if(fibo(a[i])){
				cout << a[i] << " ";
			}
		}		
	}
	else{
		cout << "NONE";
	}
}
