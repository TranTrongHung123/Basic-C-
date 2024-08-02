#include <bits/stdc++.h>

using namespace std;

long long euler(long long n){
	long long s = n;
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			s = s/i*(i-1);
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n != 1) s = s/n*(n-1);
	return s;
}

int main(){
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long n;
	cin >> n;
	cout << euler(n);
}
