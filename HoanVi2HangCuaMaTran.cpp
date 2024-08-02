#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int x, y;
	cin >> x >> y;
	--x;
	--y;
	for(int j = 0; j < n; j++){
		swap(a[x][j], a[y][j]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}		
}
