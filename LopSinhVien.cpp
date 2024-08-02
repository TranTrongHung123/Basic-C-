#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SV{
	string ten, ngay;
	double a, b, c;
	void input(){
		getline(cin, ten);
		getline(cin, ngay);
		cin >> a >> b >> c;	
	}
	void output(){
		cout << ten << " " << ngay << " " << fixed << setprecision(1) << (a+b+c);
	}
};

int main(){
	SV x;
	x.input();
	x.output();
}
