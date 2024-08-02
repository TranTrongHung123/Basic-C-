#include <bits/stdc++.h>
#define ll long long
using namespace std;

void chuanhoa(string s){
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(getline(ss, token, '/')){
		vt.push_back(token);
	}
	for(int i = 0; i < vt.size(); i++){
		if(i == 2){
			cout << vt[i];
		}
		else{
			if(vt[i][0] == '0'){
				cout << vt[i][1];
			}
			else{
				cout << vt[i];
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		for(int i = 0; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		string token;
		vector<string> vt;
		while(ss >> token){
			vt.push_back(token);
		}
		cout << vt[vt.size() - 2];
		for(int i = 0; i < vt.size() - 2; i++){
			cout << vt[i][0];
		}
		cout << "@xyz.edu.vn" << endl;
		chuanhoa(vt[vt.size() - 1]);
		cout << endl;
	}
}
