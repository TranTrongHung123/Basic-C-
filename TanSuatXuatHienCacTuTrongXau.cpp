#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string token;
	map<string,int> mp;
	vector<string> vt;
	while(ss >> token){
		++mp[token];
		vt.push_back(token);
	}
	for(auto x : mp){
		cout << x.first << ' ' << x.second << endl;
	}
	cout << endl;
	for(int i = 0; i < vt.size(); i++){
		if(mp[vt[i]] != 0){
			cout << vt[i] << " " << mp[vt[i]] << endl;
			mp[vt[i]] = 0;
		}
	}
}
