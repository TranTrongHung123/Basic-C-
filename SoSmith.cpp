#include <bits/stdc++.h>
#define ll long long
using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}

int tcs(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int check(int n){
	int tmp = n, s = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				s += tcs(i);
				n /= i;
			}
		}
	}
	if(n != 1){
		s += tcs(n);
	}
	if(s == tcs(tmp)) return 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	if(prime(n) == 0 && check(n) == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
