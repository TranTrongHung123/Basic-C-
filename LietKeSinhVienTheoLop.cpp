#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SV{
	string msv, ten, lop, email;
};

string chuanhoa(string s){
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
	string tmp = "";
	for(int i = 0; i < vt.size(); i++){
		tmp += vt[i];
		if(i != (vt.size()-1)){
			tmp += " ";
		}
	}
	return tmp;
}

int main(){
	int n;
	cin >> n;
	scanf("\n");
	SV a[n];
	for(int i = 0; i < n; i++){
		getline(cin, a[i].msv);
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		getline(cin, a[i].email);
	}
	int q;
	cin >> q;
	scanf("\n");
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << " :" << endl;
		for(int i = 0; i < n; i++){
			if(s == a[i].lop){
				cout << a[i].msv << " " << chuanhoa(a[i].ten) << " " << a[i].lop << " " << a[i].email << endl;
			}
		}
	}
}
