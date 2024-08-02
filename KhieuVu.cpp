#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a, a+n, cmp);
	sort(b, b+m, cmp);
	int i = 0, j = 0, res = 0;
	while(i < n && j < m){
		if(a[i] > b[j]){
			++res;
			++i;
			++j;
		}
		else{
			++j;
		}
	}
	cout << res;
}
