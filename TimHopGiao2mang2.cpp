#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	vector<int> giao, hop;
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int j = 0; j < m; j++){
		cin >> b[j];
	}
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] == b[j]){
			giao.push_back(a[i]);
			hop.push_back(a[i]);
			++i;
			++j;
		}
		else if(a[i] < b[j]){
			hop.push_back(a[i]);
			++i;
		}
		else{
			hop.push_back(b[j]);
			++j;
		}
	}
	while(i < n){
			hop.push_back(a[i]);
			++i;		
	}
	while(j < m){
			hop.push_back(b[j]);
			++j;		
	}
	for(int i = 0; i < hop.size(); i++){
		cout << hop[i] << " ";
	}
	cout << "\n";
	for(int i = 0; i < giao.size(); i++){
		cout << giao[i] << " ";
	}	
}
