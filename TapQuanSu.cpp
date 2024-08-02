#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[1005], b[1005];
	for(int i = 1; i <= k; i++){
		cin >> a[i];
		b[i] = a[i];
	}

	int i = k;
	while(i >= 1 && a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		cout << k;
		return 0;
	}
	else{
		++a[i];
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
	map<int,int> mp;
	for(int i = 1; i <= k; i++){
		mp[b[i]] = 1;
	}
	for(int i = 1; i <= k; i++){
		if(mp[a[i]] == 1){
			mp[a[i]] = 2;
		}
	}	
	int cnt = 0;
	for(int i = 1; i <= k; i++){
		if(mp[b[i]] == 1){
			++cnt;
		}
	}	
	cout << cnt;
}
