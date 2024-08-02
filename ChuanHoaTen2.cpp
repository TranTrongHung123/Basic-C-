#include <bits/stdc++.h>
#define ll long long
using namespace std;

void change1(string &s){
	s[0] = toupper(s[0]);
}

void change2(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
}

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
		if(i == (vt.size() - 1)){
			change2(vt[i]);
		}
		else{
			change1(vt[i]);
		}
	}	
	for(int i = 0; i < vt.size()-1; i++){
		cout << vt[i];
		if(i != (vt.size()-2)){
			cout << ' ';
		}
		else{
			cout << ", ";
		}
	}
	cout << vt[vt.size() - 1] << endl;
	cout << vt[vt.size() - 1] << ", ";
	for(int i = 0; i < vt.size()-1; i++){
		cout << vt[i];
		if(i != (vt.size()-2)){
			cout << ' ';
		}
	}	
}

int main(){
	string s;
	getline(cin, s);
	chuanhoa1(s);
}
