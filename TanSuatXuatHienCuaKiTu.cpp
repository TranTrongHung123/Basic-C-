#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int cnt[256] = {0};
	for(int i = 0; i < s.size(); i++){
		++cnt[s[i]];
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i] != 0){
			cout << (char)i << " " << cnt[i] << endl;
		}
	}
	cout << endl;
	for(int i = 0; i < s.size(); i++){
		if(cnt[s[i]] != 0){
			cout << s[i] << " " << cnt[s[i]] << endl;
			cnt[s[i]] = 0;
		}
	}
}
