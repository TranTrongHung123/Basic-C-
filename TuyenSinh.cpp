#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SV{
	string msv, ten;
	double a, b, c;
};

void nhap(SV &x){
	getline(cin, x.msv);
	getline(cin, x.ten);
	cin >> x.a >> x.b >> x.c;	
}

void xuat(SV x){
	double gpa = (x.a + x.b + x.c);
	if(x.msv.find("KV1") != string :: npos){
		gpa += 0.5;
	}
	else if(x.msv.find("KV2") != string :: npos){
		gpa += 1;
	}
	else{
		gpa += 2.5;
	}
	if(gpa >= 24){
		cout << x.msv << " " << x.ten << " " << x.msv[2] << " " << gpa << " " << "TRUNG TUYEN";	
	}
	else{
		cout << x.msv << " " << x.ten << " " << x.msv[2] << " " << gpa << " " << "TRUOT";
	}
}

int main(){
	SV x;
	nhap(x);
	xuat(x);
}
