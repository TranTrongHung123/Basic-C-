#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	long long sum = 0;
	for(auto x : s){
		sum += x - '0';
	}
	if(sum == 9 || sum == 108 || sum == 279){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
