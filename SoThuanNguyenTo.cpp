#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check1(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}

int check2(int n){
	if(n == 0) return 0;
	int sum = 0;
	while(n){
		int t = n%10;
		sum += t;
		if(t != 2 && t != 3 && t != 5 && t != 7){
			return 0;
		}
		n /= 10;
	}
	if(check1(sum)){
		return 1;
	}
	return 0;
}

int main(){
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	for(int i = a; i <= b; i++){
		if(check2(i) && check1(i)){
			++cnt;
		}
	}
	cout << cnt;
}
