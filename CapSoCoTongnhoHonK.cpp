#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int find(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] < x){
			res = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return res;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	long long cnt = 0;
	for(int i = 0; i < n; i++){
		int x = find(a, i+1, n-1, k-a[i]);
		if(x != -1){
			cnt += 1ll * (x-i);
		}
	}
	cout << cnt;
}
