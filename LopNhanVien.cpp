#include <bits/stdc++.h>
#define ll long long
using namespace std;

string chuanhoa(string s){
	return s;
}

struct NV{
	string ma = "00001";
	string ten, gtinh, ngay, dchi, mst, hdong;
	void input(){
		getline(cin, ten);
		getline(cin, gtinh);
		getline(cin, ngay);
		getline(cin, dchi);
		getline(cin, mst);
		getline(cin, hdong);
	}
	void output(){
		cout << ma << " " << ten << " " << gtinh << " " << chuanhoa(ngay) << " " << dchi << " " << mst << " " << chuanhoa(hdong);
	}
};

int main(){
	NV x;
	x.input();
	x.output();
}
