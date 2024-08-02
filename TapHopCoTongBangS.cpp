#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, s;
int X[1000], a[1000];
int sum = 0, x = 0, cnt = 0;

void Try(int i, int idx){
	for(int j = idx; j <= n; j++){
		sum += a[j];
		++x;
		if(x == k && sum == s){
			++cnt;
		}
		else{
			Try(i + 1, j + 1);
		}
		sum -= a[j];
		--x;		
	}
}

int main(){
	cin >> n >> k >> s;
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	Try(1,1);
	cout << cnt;
}