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

int main(){
	cin >> n;
	int b[n + 1];
	int x = n;
	for(int i = n; i >= 1; i--){
		b[i] = x--;
	}	
	set<string> st;
	ktao();
	ok = true;
	while(ok){
		string tmp = "";
		for(int i = 1; i <= n; i++){
			if(a[i] == 1){
				tmp += to_string(b[i]);
				tmp += " ";
			}
		}
		st.insert(tmp);
		sinh();
	}
	vector<string> vt;
	for(auto x : st){
		vt.push_back(x);
	}
	for(int i = 1; i < vt.size(); i++){
		cout << vt[i] << endl;
	}
}
