#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool find(int a[], int l, int r, int x){
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			return true;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return false;
}

int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	int ok = 0;
	for(int i = 0; i < n; i++){
		if(find(a,i+1,n-1,x+a[i])){
			ok = 1;
			break;
		}
	}
	if(ok == 1){
		cout << 1;
	}
	else{
		cout << -1;
	}
}
