#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	ll sum = 0, lt = 1;
	for(int i = s.size()-1; i >= 0; i--){
		sum += (s[i] - '0')*lt;
		lt *= 2;
		lt %= 5;
		sum %= 5;
	}
	if(sum == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
