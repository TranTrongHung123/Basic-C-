#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SV{
	int msv;
	string ten, lop, sinh;
	double gpa;
};

string chuanhoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

string chuanhoa1(int a){
	string s = to_string(a);
	string x = "SV" + string(3 - s.size(), '0') + s;
	return x;
}

int main(){
	int n;
	cin >> n;
	SV a[n];
	for(int i = 0; i < n; i++){
		cin.ignore();
		a[i].msv = i+1;
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		getline(cin, a[i].sinh);
		cin >> a[i].gpa;
	}
	for(int i = 0; i < n; i++){
		cout << chuanhoa1(a[i].msv) << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
