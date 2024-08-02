#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[100], ok;

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

bool check1(){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 1){
			++cnt;
		}
	}
	if(cnt == k){
		return true;
	}
	return false;
}

bool check2(){
	int cnt = 0;
	for(int i = 1; i <= n-k+1; i++){
		if(a[i] == 1){
			int ok = true;
			for(int j = i+1; j <= i+k-1; j++){
				if(a[j] == 0){
					ok = false;
					break;
				}
			}
			if(ok == true){
				++cnt;
			}
		}
	}
	if(cnt == 1){
		return true;
	}
	return false;
}

int main(){
	cin >> n >> k;
	ktao();
	ok = true;
	while(ok){
		if(check1() == true){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << " ";
		}
		sinh();
	}
	cout << endl;
	ktao();
	ok = true;
	while(ok){
		if(check2() == true){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << " ";
		}
		sinh();
	}	
}
