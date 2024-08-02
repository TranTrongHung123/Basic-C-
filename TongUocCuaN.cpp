#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long s = 0;
	for(long long i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			s += i + (n/i);
		}
	}
	long long x = sqrt(n);
	if(x*x == n){
		s -= x;
	}
	cout << s;
}
