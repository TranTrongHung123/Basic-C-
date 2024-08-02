#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	if(n == 0){
		cout << "0";
	}
	else{
		long long cnt = 0;
		while(n){
			long long t = n%10;
			if(t == 2 || t == 3 || t == 5 || t == 7){
				++cnt;
			}
			n /= 10;
		}
		cout << cnt;
	}
}
