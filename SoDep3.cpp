#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check1(string s){
	for(int i = 1; i < s.size(); i++){
		if(s[i] < s[i-1]){
			return false;
		}
	}
	return true;
}

bool check2(string s){
	for(int i = 1; i < s.size(); i++){
		if(s[i] > s[i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	string s;
	getline(cin, s);
	if(check1(s) || check2(s)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
