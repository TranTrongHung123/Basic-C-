#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[105][105];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		sort(a[i], a[i] + n);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = j+1; k < n; k++){
				if(a[i][j] == a[i][k] && a[i][j] != -1){
					a[i][k] = -1;
				}
			}
		}
	}
	map<int,int> mp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] != -1){
				++mp[a[i][j]];
			}
		}
	}	
	int ok = 0;
	for(int i = 0; i < n; i++){
		if(a[0][i] != -1){
			if(mp[a[0][i]] == n){
				ok = 1;
				break;
			}
		}
	}
	if(ok == 0){
		cout << "NOT FOUND";
	}
	else{
		for(int j = 0; j < n; j++){
			if(a[0][j] != -1){
				if(mp[a[0][j]] == n){
					cout << a[0][j] << " ";
				}
			}
		}		
	}
}
