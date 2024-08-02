#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll f[100];

void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(ll i = 2; i <= 93; i++){
		f[i] = (f[i-1] + f[i-2]);
	}
}


int main(){
	fibo();
	ll n;
	cin >> n;
	ll ok = 0;
	for(ll i = 0; i <= 93; i++){
		if(n == f[i]){
			ok = 1;
			break;
		}
	}
	if(ok == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
