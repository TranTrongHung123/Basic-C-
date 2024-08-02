#include <bits/stdc++.h>
#define ll long long
using namespace std;

void chuanhoa1(string s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}
	for(int i = 0; i < vt.size(); i++){
		vt[i][0] = toupper(vt[i][0]);
	}
	for(int i = 0; i < vt.size(); i++){
		cout << vt[i] << " ";
	}	
}

void chuanhoa2(string s){	
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(getline(ss, token, '/')){
		vt.push_back(token);
	}	
	for(int i = 0; i < vt.size(); i++){
		if(vt[i].size() == 1){
			cout << '0' << vt[i];
		}
		else{
			cout << vt[i];
		}
		if(i != vt.size() - 1){
			cout << '/';
		}
	}	
}

int main(){
	string s, t;
	getline(cin, s);
	getline(cin, t);
	chuanhoa1(s);
	cout << endl;
	chuanhoa2(t);
}
