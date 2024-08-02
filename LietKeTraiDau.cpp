#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
	if(a[0] * a[1] < 0){
		cout << a[0] << " ";
	}
	for(ll i = 1; i < n-1; i++){
		if((a[i] * a[i-1] < 0) || (a[i] * a[i+1] < 0)){
			cout << a[i] << " ";
		}
	}
	if(a[n-1] * a[n-2] < 0){
		cout << a[n-1];
	}
}
