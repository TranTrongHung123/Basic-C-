#include <bits/stdc++.h>

using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}

int check(int n){
	while(n){
		int t = n%10;
		if(prime(t) == 0) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int l, r;
	cin >> l >> r;
	int cnt = 0;
	for(int i = l; i <= r; i++){
		if(check(i) && prime(i)){
			++cnt;
		}
	}
	cout << cnt;
	return 0;
}
