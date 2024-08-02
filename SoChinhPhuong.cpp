#include <bits/stdc++.h>

using namespace std;

int check(long long n){
	long long tmp = sqrt(n);
	if(tmp * tmp == n) return 1;
	return 0;
}

int main(){
	long long n;
	cin >> n;
	if(check(n)) cout << "YES";
	else{
		cout << "NO";
	}
	return 0;
}
