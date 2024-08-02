#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f[1000005];

void sieve(){
    for(ll i = 0; i <= 1000000; i++){
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for(ll i = 2; i <= 1000; i++){
        for(ll j = i*i; j <= 1000000; j += i){
            f[j] = 0;
        }
    }
}

int main(){
    sieve();
    ll t;
    cin >> t;
    while(t--){
    	int a, b;
    	cin >> a >> b;
    	for(int i = a; i <= b; i++){
    		if(f[i]){
    			cout << i << " ";
			}
		}
		cout << endl;
	}
}
