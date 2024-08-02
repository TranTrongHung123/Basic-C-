#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int idx1 = -1;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			idx1 = i+1;
			break;
		}
	}
	int idx2 = -1;
	for(int i = n-1; i > idx1; i--){
		if(a[i] == x){
			idx2 = i+1;
			break;
		}
	}
	cout << idx1 << " " << idx2;
}
