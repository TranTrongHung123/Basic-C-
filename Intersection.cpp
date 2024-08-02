#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	map<int, int> giao;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		giao[a[i]] = 1;
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
		if(giao[b[i]] == 1){
			giao[b[i]] = 2;
		}
	}
	for(int i = 0; i < n; i++){
		if(giao[a[i]] == 2){
			cout << a[i] << " ";
			giao[a[i]] = -1;
		}
	}	
}
