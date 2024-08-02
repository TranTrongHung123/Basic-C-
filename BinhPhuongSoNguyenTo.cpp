#include <bits/stdc++.h>

using namespace std;

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int mu = 0;
			while(n % i == 0){
				++mu;
				n /= i;
			}
			if(mu >= 2){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int a, b;
	cin >> a >> b;
	int x = min(a,b);
	int y = max(a,b);
	for(int i = x; i <= y; i++){
		if(check(i)){
			cout << i << " ";
		}
	}
}
