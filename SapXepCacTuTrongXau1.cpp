#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string a, string b){
	if(a.size() != b.size()){
		return a.size() < b.size();
	}
	return a < b;
}

int main(){
	string s;
	getline(cin, s);
	vector<string> vt;
	stringstream ss(s);
	string token;
	while(ss >> token){
		vt.push_back(token);
	}
	sort(vt.begin(), vt.end());
	for(auto x : vt){
		cout << x << " ";
	}
	cout << endl;
	sort(vt.begin(), vt.end(), cmp);
	for(auto x : vt){
		cout << x << " ";
	}	
}
