#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		--i;
	}
	if(i == -1){
		cout << string(s.size(), '0');
	}
	else{
		s[i] = '1';
		cout << s;
	}
}