#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[1000], cnt, ok;

void ktao(){
	cnt = 1;
	a[1] = n;
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0){
		ok = false;
	}
	else{
		--a[i];
		int thieu = cnt - i + 1;
		int x = thieu / a[i];
		int y = thieu % a[i];
		cnt = i;
		for(int j = 1; j <= x; j++){
			a[++cnt] = a[i];
		}
		if(y){
			a[++cnt] = y;
		}
	}
}

int main(){
	cin >> n;
	ktao();
	ok = true;
	vector<string> st;
	while(ok){
		string tmp = "";
		for(int i = 1; i <= cnt; i++){
			tmp += to_string(a[i]);
			tmp += " ";
		}
		st.push_back(tmp);
		sinh();
	}
	cout << st.size() << "\n";
	for(auto x : st){
		cout << x << "\n";
	}
}
