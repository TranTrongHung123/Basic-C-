#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f[1000000];

void sang(){
    for(ll i = 0; i <= 1000000; i++){
        f[i] = 1;
    }
    f[0] = 0;
    f[1] = 0;
    for(ll i = 2; i <= 1000; i++){
        for(ll j = i*i; j <= 1000000; j += i){
            f[j] = 0;
        }
    }
}

int main(){
	sang();
	ll n;
	cin >> n;
	ll cnt = 0;
	for(ll i = 2; i <= sqrt(n); i++){
		if(f[i] == 1){
			++cnt;
		}
	}
	cout << cnt;
}
