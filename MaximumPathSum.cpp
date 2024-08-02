#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
				if((j-1) >= 0 && (i-1) < 0){
					a[i][j] += a[i][j-1];
				}
				else if((j-1) < 0 && (i-1) >= 0){
					a[i][j] += a[i-1][j];
				}
				else if((j-1) >= 0 && (i-1) >= 0){
					a[i][j] += max(a[i][j-1], a[i-1][j]);
				}
				else{
					a[i][j] = a[i][j];
				}
		}
	}	
	cout << a[n-1][m-1];
}
