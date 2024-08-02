#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll S(ll n){
	if(n == 1) return 1;
	else{
		return n + S(n-1);
	}
}

int main(){
	ll n;
	cin >> n;
	cout << S(n);
}
