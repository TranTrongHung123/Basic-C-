#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[1000], ok;

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
	if(a[1] != 1 || a[n] != 0){
		return false;
	}
	for(int i = 1; i <= n; i++){
		if(a[i] == 1 && a[i-1] == 1){
			return false;
		}
	}
	for(int i = 1; i <= n; i++){
		if(a[i] == 0){
			int cnt = 1;
			for(int j = i+1; j <= n; j++){
				if(a[j] == 0){
					++cnt;
				}
				else{
					break;
				}
				if(cnt > 3){
					return false;
				}
			}
		}
	}
	return true;
}

set<string> st;

int main(){
	cin >> n;
	ktao();
	ok = true;
	while(ok){
		if(check()){
			string tmp = "";
			for(int i = 1; i <= n; i++){
				if(a[i] == 0){
					tmp += to_string(6);
				}
				else{
					tmp += to_string(8);
				}
			}
			st.insert(tmp);
		}
		sinh();
	}
	for(auto x : st){
		cout << x << endl;
	}
}
