#include <bits/stdc++.h>

long long mod = 1e9 + 7;

using namespace std;

long long kq(long long n){
	long long x = 0;
	for(long long i = 5; i <= n; i *= 5){
		x += (n/i) % mod;
	}
	return x;
}

int main(){
	long long n;
	cin >> n;
	cout << kq(n);
}
