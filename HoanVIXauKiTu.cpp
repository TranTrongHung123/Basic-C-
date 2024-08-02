#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	map<char,int> mp;
	for(int i = 0; i < s.size(); i++){
		++mp[s[i]];
	}
	string tmp = "";
	for(int i = 0; i < s.size(); i++){
		if(mp[s[i]] != 0){
			tmp += s[i];
			mp[s[i]] = 0;
		}
	}
	vector<char> vt;
	for(int i = 0; i < tmp.size(); i++){
		vt.push_back(tmp[i]);
	}
	sort(vt.begin(), vt.end());
	do{
		for(auto x : vt){
			cout << x;
		}
		cout << "\n";
	}while(next_permutation(vt.begin(), vt.end()));
}
