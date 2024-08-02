#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[100], ok = true;

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

int main(){
	cin >> n;
	ktao();
	while(ok == true){
		for(int i = 1; i <= n; i++){
			if(a[i] == 0){
				cout << 'B';
			}
			else{
				cout << 'A';
			}
		}
		cout << endl;
		sinh();
	}
}
