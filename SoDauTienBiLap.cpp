#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

bool check(int x, int a[]){
	for(int i = x-1; i >= 0; i--){
		if(a[x] == a[i]){
			return true;
		}
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ok = 0;
	for(int i = 0; i < n; i++){
		if(check(i, a)){
			ok = 1;
			cout << a[i];
			break;
		}
	}
	if(ok == 0){
		cout << "-1";
	}
}
