#include <bits/stdc++.h>

using namespace std;

int kq(int n){
	if(n == 1) return 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return i;
		}
	}
	return n;
}

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cout << kq(i) << endl;
	}
}
