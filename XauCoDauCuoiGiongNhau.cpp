#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	int x = s.size();
	int cnt[256] = {0};
	for(int i = 0; i < s.size(); i++){
		++cnt[s[i]];
	}
	for(int i = 0; i < 256; i++){
		x += (cnt[i]) * (cnt[i] - 1) / 2;
	}
	cout << x;
}
