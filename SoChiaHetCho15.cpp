#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s){
	if(s[s.size() - 1] != '0' && s[s.size() - 1] != '5'){
		return false;
	}
	int sum = 0;
	for(auto x : s){
		sum += x - '0';
	}
	if(sum % 3 != 0){
		return false;
	}
	return true;
}

int main(){
	string s;
	getline(cin, s);
	if(check(s)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
