#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll check(ll n){
	ll cnt = 0;
	ll cnt1 = 0;
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			++cnt1;
			while(n % i == 0){
				++cnt;
				n /= i;
			}
		}
	}
	if(n != 1){
		++cnt1;
		++cnt;
	}
	if(cnt == 3 && cnt1 == 3) return 1;
	return 0;
}

int main(){
	ll n;
	cin >> n;
	if(check(n)){
		cout << "1";
	}
	else{
		cout << "0";
	}
}
