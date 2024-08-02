#include <bits/stdc++.h>
#define ll long long
using namespace std;

string chuanhoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

struct SV{
	string ten, lop, ngay;
	double gpa;
	void input(){
		getline(cin, ten);
		getline(cin, lop);
		getline(cin, ngay);
		cin >> gpa;
	}
	void output(){
		cout << ten << " " << lop << " " << chuanhoa(ngay) << " " << fixed << setprecision(2) << gpa;
	}
};

int main(){
	SV x;
	x.input();
	x.output();
}
