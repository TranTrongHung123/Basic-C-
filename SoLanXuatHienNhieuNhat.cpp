#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	map<int,int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		++mp[a[i]];
	}
	int max = 0;
	for(auto x : mp){
		if(x.second > max){
			max = x.second;
		}
	}
	for(auto x : mp){
		if(x.second == max){
			cout << x.first << " " << x.second;
			break;
		}
	}	
}

