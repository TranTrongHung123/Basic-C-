#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int a[], int n){
	int cnt25 = 0, cnt50 = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 25){
			++cnt25;
		}
		if(a[i] == 50){
			if(cnt25 == 0){
				return false;
			}
			else{
				++cnt50;
				--cnt25;
			}
		}
		if(a[i] == 100){
			if(((25*cnt25 + 50*cnt50) < 75) || (cnt25 == 0)){
				return false;
			}
			else{
				--cnt50;
				--cnt25;
			}
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(check(a,n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
