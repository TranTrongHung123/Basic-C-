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
	sort(a, a+n);
	int l = 0, r = n-1;
	int cnt = 0;
	while(l <= r){
		if((a[l] + a[r]) <= x){
			++cnt;
			++l;
			--r;
		}
		else{
			++cnt;
			--r;
		}
	}
	cout << cnt;
}
