#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s){
	int cnt[256] = {0};
	for(int i = 0; i < s.size(); i++){
		cnt[s[i]] = 1;
	}
	for(int i = 97; i <= 122; i++){
		if(cnt[i] == 0){
			return false;
		}
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	if(check(s)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}	
