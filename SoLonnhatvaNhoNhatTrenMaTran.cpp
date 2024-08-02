#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int min = 1e9, max = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] >= max){
				max = a[i][j];
			}
			if(a[i][j] <= min){
				min = a[i][j];
			}
		}
	}	
	pair<int,int> minv[1000], maxv[1000];
	int h = 0, k = 0;	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == min){
				minv[h].first = i+1;
				minv[h].second = j+1;
				++h;
			}
			if(a[i][j] == max){
				maxv[k].first = i+1;
				maxv[k].second = j+1;
				++k;				
			}
		}
	}	
	cout << min << endl;
	for(int i = 0; i < h; i++){
		cout << minv[i].first << " " << minv[i].second << endl;
	}
	cout << max << endl;
	for(int i = 0; i < k; i++){
		cout << maxv[i].first << " " << maxv[i].second << endl;
	}	
}
