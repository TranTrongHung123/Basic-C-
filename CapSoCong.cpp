#include <iostream>

using namespace std;

int main(){
	long long n, u1, d;
	cin >> n >> u1 >> d;
	long long s = (2*u1 + (n-1)*d)*n/2;
	cout << s;
}
