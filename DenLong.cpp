#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, l;
	cin >> n >> l;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	double d = max(a[0], l - a[n-1]);
	for(int i = 1; i < n; i++){
		d = max(d, 1.0 * (a[i] - a[i-1]) / 2);
	}
	cout << fixed << setprecision(10) << d;
}
