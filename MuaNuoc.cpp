#include <bits/stdc++.h>

using namespace std;

long long min(long long a, long long b){
	return a > b ? b : a;
}

int main(){
	long long n, a, b;
	cin >> n >> a >> b;
	long long t1 = n * a;
	long long t2 = (n/2)*b + (n%2)*a;
	long long t = min(t1, t2);
	cout << t;
}
