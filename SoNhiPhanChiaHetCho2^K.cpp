#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	int cnt = 0;
	for(int i = s.size() - 1; i > s.size() - 1 - k; i--){
		if(s[i] == '0'){
			++cnt;
		}
		else{
			break;
		}
	}
	if(cnt == k){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
