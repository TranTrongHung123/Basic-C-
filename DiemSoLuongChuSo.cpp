#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	if(n == 0){
		cout << "1";
	}
	else{
		long long cnt = 0;
		while(n){
			++cnt;
			n /= 10;
		}
		cout << cnt;
	}
}
