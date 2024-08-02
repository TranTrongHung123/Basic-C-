#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct NV{
	string ten, chuc;
	ll luongcb, thuong, pcap, thunhap, ngaycong, luongt;
};

int main(){
	NV a;
	getline(cin, a.ten);
	cin >> a.luongcb >> a.ngaycong;
	scanf("\n");
	getline(cin, a.chuc);
	a.luongt = a.luongcb * a.ngaycong;
	if(a.ngaycong >= 25){
		a.thuong = 20 * a.luongcb / 100;
	}
	else if(a.ngaycong >= 22 && a.ngaycong < 25){
		a.thuong = 10 * a.luongcb / 100;
	}
	else{
		a.thuong = 0;
	}
	if(a.chuc == "GD"){
		a.pcap = 250000;
	}
	else if(a.chuc == "PGD"){
		a.pcap = 200000;
	}
	else if(a.chuc == "TP"){
		a.pcap = 180000;
	}
	else{
		a.pcap = 150000;
	}
	cout << "NV01" << " " << a.ten << " " << a.luongt << " " << a.thuong << " " << a.pcap << " " << a.luongt + a.thuong + a.pcap;
}
