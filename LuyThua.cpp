#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll power1(ll a, ll b){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= 1000000007;
		}
		b /= 2;
		a = ((a % 1000000007) * (a % 1000000007)) % 1000000007;
	}
	return res;
}

int main(){
	ll a, b;
	cin >> a >> b;
	cout << power1(a,b);
}
