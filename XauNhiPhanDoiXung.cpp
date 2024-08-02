#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[100], ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0){
		ok = false;
	}
	else{
		a[i] = 1;
	}
}

bool check(){
	int l = 1, r = n;
	while(l <= r){
		if(a[l] != a[r]){
			return false;
		}
		++l;
		--r;
	}
	return true;
}

int main(){
	cin >> n;
	ktao();
	ok = true;
	while(ok == true){
		if(check() == true){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << endl;
		}
		sinh();
	}
}
