#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cmp(string a, string b){
	string ab = a+b;
	string ba = b+a;
	return ab > ba;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	vector<string> vt;
	stringstream ss(s);
	string token;
	while(ss >> token){
		vt.push_back(token);
	}
	sort(vt.begin(), vt.end(), cmp);
	for(auto x : vt){
		cout << x;
	}
}
