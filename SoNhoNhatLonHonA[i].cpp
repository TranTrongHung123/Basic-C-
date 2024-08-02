#include <bits/stdc++.h>
#define ll long long
using namespace std;

int find(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] > x){
			res = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return res;
}

int find_idx(int a[], int n, int x){
	int l = 0, r = n-1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			return mid;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	for(int i = 0; i < n; i++){
		int x = find_idx(b, n, a[i]);
		if(find(b, x+1, n-1, a[i]) == -1){
			cout << "_" << " ";
		}
		else{
			cout << b[find(b, x+1, n-1, a[i])] << " ";
		}
	}
}
