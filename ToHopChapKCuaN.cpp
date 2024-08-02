#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int Ckn(int k, int n){
	if(k == 0 || k == n) return 1;
	else{
		return (Ckn(k,n-1) % mod + Ckn(k-1,n-1) % mod) % mod;
	}
}

int main(){
	int n, k;
	cin >> n >> k;
	cout << Ckn(k,n);
}
