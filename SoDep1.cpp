#include <bits/stdc++.h>
#define ll long long
using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}

bool check(string s){
	int sum = 0;
	for(auto x : s){
		if(prime(x - '0') == 0){
			return false;
		}
		sum += x - '0';
	}
	if(prime(sum)){
		return true;
	}
	return false;
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
