#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long s = 0;
	for(long long i = 1; i <= n; i++){
		if(i % 3 == 0){
			s += i;
		}
	}
	cout << s;
}
