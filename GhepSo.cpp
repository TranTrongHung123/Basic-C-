#include <bits/stdc++.h>

using namespace std;

int main(){
	long long k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	long long x1 = min({k2, k5, k6});
	long long x2 = min({k2 - x1, k3});
	long long s = x1 * 256 + x2 * 32;
	cout << s;
}
