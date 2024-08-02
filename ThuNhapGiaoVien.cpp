#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct NV{
	string cap, ten;
	ll luong;
};

void nhap(NV &a){
	getline(cin, a.cap);
	getline(cin, a.ten);
	cin >> a.luong;	
}

void xuat(NV a){
	ll hso = stoll(a.cap.substr(2,3));
	string pcap = a.cap.substr(0,2);
	ll tnhap = a.luong * hso;
	if(pcap == "HT"){
		tnhap += 2000000;
	}
	else if(pcap == "HP"){
		tnhap += 900000;
	}
	else{
		tnhap += 500000;
	}
	cout << a.cap << " " << a.ten << " " << hso << " " << tnhap;
}

int main(){
	NV x;
	nhap(x);
	xuat(x);
}
