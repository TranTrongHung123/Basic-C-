#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s){
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		if((i+1) % 2 == 0){
			sum += s[i] - '0';
		}
		else{
			sum -= s[i] - '0';
		}
	}
	if(abs(sum) % 11 == 0){
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
