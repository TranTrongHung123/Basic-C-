#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s){
	int l = 0, r = s.size() - 1;
	while(l <= r){
		if(s[l] != s[r]){
			return false;
		}
		++l;
		--r;
	}
	return true;
}

int main(){
	string s;
	getline(cin, s);
	int cnt = 0;
	for(auto x : s){
		if(x == '6'){
			++cnt;
			break;
		}
	}
	if(cnt != 0 && check(s)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
