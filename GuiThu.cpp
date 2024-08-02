#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long ll;


int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	for(ll i = 0; i < n; i++){
		if(i == 0){
			cout << a[1] - a[0] << " " << a[n-1] - a[0] << "\n";
		}
		else if(i == n-1){
			cout << a[n-1] - a[n-2] << " " << a[n-1] - a[0] << "\n";
		}
		else{
			cout << min(a[i+1] - a[i], a[i] - a[i-1]) << " " <<  max(a[n-1] - a[i], a[i] - a[0]) << "\n";
		}
	}
}
