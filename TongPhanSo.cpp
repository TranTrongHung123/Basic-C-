#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	double s = 0;
	for(int i = 1; i <= n; i++){
		s += 1.0 * 1/i;
	}
	cout << fixed << setprecision(3) << s;
}
