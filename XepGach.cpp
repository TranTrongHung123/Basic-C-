#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	int res = a[0], h = 1;
	for(int i = 1; i < n; i++){
		if(res >= 1){
			++h;
			res = min(res-1, a[i]);
		}
	}
	cout << h;
}
