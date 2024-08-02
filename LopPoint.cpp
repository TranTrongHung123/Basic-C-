#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct TD{
	double x, y;
	void nhap(){
		cin >> x >> y;
	}
};

	void xuat(TD a, TD b){
		double h = (a.x - b.x) * (a.x - b.x);
		double k = (a.y - b.y) * (a.y - b.y);
		cout << fixed << setprecision(4) << sqrt(h + k) << endl;
	}

int main(){
	int t;
	cin >> t;
	while(t--){
		TD a, b;
		a.nhap();
		b.nhap();
		xuat(a,b);
	}
}
