#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct PS{
	ll tu, mau;
	void input(){
		cin >> tu >> mau;
	}
	void output(){
		ll x = __gcd(tu,mau);
		cout << tu/x << "/" << mau/x;
	}
};

int main(){
	PS a;
	a.input();
	a.output();
}
