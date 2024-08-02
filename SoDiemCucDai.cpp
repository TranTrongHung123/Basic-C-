#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

bool check(int i, int j, int n, int m, int a[105][105]){
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m){
			if(a[i][j] <= a[i1][j1]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int n, m;
	cin >> n >> m;
	int a[105][105];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(check(i, j, n, m, a)){
				++cnt;
			}
		}
	}	
	cout << cnt;
}
