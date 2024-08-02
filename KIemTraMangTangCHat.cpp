#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int a[], int n){
	for(int i = 0; i < n-1; i++){
		if(a[i+1] <= a[i]){
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
	if(check(a,n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
