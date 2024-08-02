#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	if(n == 0){
		cout << "0";
	}
	else{
		long long s = 0;
		while(n){
			s += n%10;
			n /= 10;
		}
		cout << s;
	}
}
