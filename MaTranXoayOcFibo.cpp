#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll f[100];

void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(ll i = 2; i <= 92; i++){
		f[i] = f[i-1] + f[i-2];
	}
}

int main(){
	fibo();
	ll n;
	cin >> n;
	ll a[n][n];
	int res = 0;
	int h1 = 0, c1 = 0, h2 = n-1, c2 = n-1;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = f[res++];
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = f[res++];
		}
		--c2;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = f[res++];
		}
		--h2;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = f[res++];
		}
		++c1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
