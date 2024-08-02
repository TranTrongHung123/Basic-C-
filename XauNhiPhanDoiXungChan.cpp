#include <bits/stdc++.h>
using namespace std;

set<string> st;
int ok;
string a;

string dao(string s){
	int l = 0, r = s.size() - 1;
	while(l <= r){
		swap(s[l], s[r]);
		++l;
		--r;
	}
	return s;
}

void sinh(){
	int i = a.size() - 1;
	while(i >= 0 && a[i] == '1'){
		a[i] = '0';
		--i;
	}
	if(i == -1){
		ok = false;
	}
	else{
		a[i] = '1';
	}
}

int main(){
	for(int k = 1; k <= 15; k++){
		a = string(k, '0');
		ok = true;
		while(ok){
			string tmp = dao(a);
			st.insert(a + tmp);
			sinh();
		}
	}
	int n;
	cin >> n;
	for(auto x : st){
		if(x.size() <= n){
			cout << x << endl;
		}
	}
}
