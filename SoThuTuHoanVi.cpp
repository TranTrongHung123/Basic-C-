#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[100], ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if(i == 0){
		ok = false;
	}
	else{
		int j = n;
		while(a[i] > a[j]){
			--j;
		}
		swap(a[i], a[j]);
		sort(a + i + 1, a + n + 1);
	}
}

int main(){
	cin >> n;
	int b[n+1];
	string x = "";
	for(int i = 1; i <= n; i++){
		cin >> b[i];
		x += to_string(b[i]);
	}
	int cnt = 1;
	ktao();
	ok = true;
	while(ok){
		string y = "";
		for(int i = 1; i <= n; i++){
			y += to_string(a[i]);
		}
		if(x == y){
			cout << cnt;
			return 0;
		}
		else{
			++cnt;
		}
		sinh();
	}
}
