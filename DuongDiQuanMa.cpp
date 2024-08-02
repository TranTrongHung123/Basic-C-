#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

int n;
int a[105][105];

void dichuyen(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(a[i1][j1] == 1 && i1 >= 0 && j1 >= 0 && i1 < n && j1 < n){
			dichuyen(i1,j1);
		}
	}
}

int main(){
	int s, t, u, v;
	cin >> n >> s >> t >> u >> v;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	--s;
	--t;
	--u;
	--v;
	dichuyen(s, t);
	if(a[u][v] == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
