#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int find1(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			res = mid;
			r = mid - 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return res;
}

int find2(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			res = mid;
			l = mid + 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;			
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
	ll cnt = 0;
	for(int i = 0; i < n; i++){
		int x = find1(a, i+1, n-1,k - a[i]);
		int y = find2(a, i+1, n-1,k - a[i]);
		if(x != -1 && y != -1){
			cnt += 1ll * y + 1 - x;
		}
	}
	cout << cnt;
}
