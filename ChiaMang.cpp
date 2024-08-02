#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long ll;

int main(){
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll n, k;
	cin >> n >> k;
	ll a[n];
	ll s1 = 0, s2 = 0;
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	if((k) < (n-k)){
		sort(a, a+n);
	}
	else{
		sort(a, a + n, greater<int>());	
	}
	    for(ll i = 0; i < n; i++){
	        if(i < k){
	            s1 += a[i];
	        }
	        else{
	            s2 += a[i];
	        }
	    }
	cout << abs(s2-s1);
}
