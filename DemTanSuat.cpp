#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cnt[10000001];

int main(){
	int n;
	cin >> n;
	int a[n];
	int min_val = 1e9, max_val = -1e9;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]]++ ;
		if(a[i] <= min_val){
			min_val = a[i];
		}
		if(a[i] >= max_val){
			max_val = a[i];
		}
	}
	for(int i = min_val; i <= max_val; i++){
		if(cnt[i] != 0){
			cout << i << " " << cnt[i] << "\n";
		}
	}
	cout << "\n";
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] != 0){
			cout << a[i] << " " << cnt[a[i]] << "\n";
			cnt[a[i]] = 0;
		}
	}
}
