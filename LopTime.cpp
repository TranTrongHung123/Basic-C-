#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct T{
	ll gio, phut, giay, tong;
};

void nhap(T &a){
	cin >> a.gio >> a.phut >> a.giay;
	a.tong = 3600 * a.gio + 60 * a.phut + a.giay;
}

void xuat(T a){
	cout << a.gio << " " << a.phut << " " << a.giay << endl;
}

bool cmp(T a, T b){
	return a.tong < b.tong;
}

int main(){
	int n;
	cin >> n;
	T a[n];
	for(int i = 0; i < n; i++){
		nhap(a[i]);
	}
	stable_sort(a, a+n, cmp);
	for(int i = 0; i < n; i++){
		xuat(a[i]);
	}
}
