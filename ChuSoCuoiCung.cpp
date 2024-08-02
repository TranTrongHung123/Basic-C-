#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	ll sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum = 10*sum + (s[i] - '0');
		sum %= 4;
	}
	if(s == "0"){
		cout << 1;
		return 0;
	}
	if(sum == 1){
		cout << 8;
	}
	else if(sum == 2){
		cout << 4;
	}
	else if(sum == 3){
		cout << 2;
	}
	else if(sum == 0){
		cout << 6;
	}
}
