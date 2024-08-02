#include <bits/stdc++.h>
#define ll long long

using namespace std;

int f[1000001];

void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 1000001; i++){
		f[i] = (f[i-1] % 1000000007 + f[i-2] % 1000000007) % 1000000007;
	}
}


int main(){
	fibo();
	int n;
	cin >> n;
	cout << f[n]
}
