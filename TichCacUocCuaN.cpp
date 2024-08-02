#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long x = 1;
	for(long long i = 1; i <= n; i++){
		if(n % i == 0){
			x *= i;
		}
	}	
	cout << x;
}
