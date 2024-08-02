#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	ll r;
	cin >> r;
	long long sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum = 10*sum + (s[i]-'0');
		sum %= r;
	}
	cout << sum;
}
