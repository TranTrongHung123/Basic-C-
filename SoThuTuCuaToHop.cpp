#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[1000], ok;

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		ok = false;
	}
	else{
		++a[i];
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int C(int k, int n){
	if(k == 0 || k == n){
		return 1;
	}
	else{
		return C(k-1,n-1) + C(k,n-1);
	}
}

int main(){
	cin >> n >> k;
	int b[1000];
	string x = "";
	for(int i = 1; i <= k; i++){
		cin >> b[i];
		x += to_string(b[i]);
	}
	int cnt = 1;
	ktao();
	ok = true;
	while(ok){
		string y = "";
		for(int i = 1; i <= k; i++){
			y += to_string(a[i]);
		}
		if(x == y){
			break;
		}
		else{
			++cnt;
		}
		sinh();
	}
	cout << C(k,n) - cnt + 1;
}
