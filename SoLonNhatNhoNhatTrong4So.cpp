#include <iostream>

using namespace std;

long long max(long long a, long long b){
	return a > b ? a : b;
}

long long min(long long a, long long b){
	return a > b ? b : a;
}

int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << max(max(a,b), max(c,d)) << " " << min(min(a,b), min(c,d));
}
