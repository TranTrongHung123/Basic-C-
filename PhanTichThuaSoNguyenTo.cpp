#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	for(ll i = 2; i <= sqrt(n); i++){
		ll cnt = 0;
		if(n % i == 0){
			while(n % i == 0){
				++cnt;
				n /= i;
			}
			cout << i << "^" << cnt;
			if(n != 1){
				cout << " * ";
			}
		}
	}
	if(n != 1){
		cout << n << "^1";
	}
}
