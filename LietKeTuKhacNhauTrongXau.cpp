#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	map<string,int> mp;
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
		++mp[token];
	}
	for(auto x : mp){
		cout << x.first << " ";
	}
	cout << endl;
	for(int i = 0; i < vt.size(); i++){
		if(mp[vt[i]] != 0){
			cout << vt[i] << " ";
			mp[vt[i]] = 0;
		}
	}
}	
