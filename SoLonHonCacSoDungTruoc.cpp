#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int a[], int i){
	for(int k = i-1; k >= 0; k--){
		if(a[k] >= a[i]){
			return false;
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
	for(int i = 0; i < n; i++){
		if(check(a,i)){
			cout << a[i] << " ";
		}
	}
}
