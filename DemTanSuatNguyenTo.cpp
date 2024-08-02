#include <bits/stdc++.h>

using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}

pair<int, int> a[100000];
int x = 0;

int find(int k){
	for(int i = 0; i < x; i++){
		if(k == a[i].first){
			return i;
		}
	}
	return -1;
}

int main(){
	ios :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	while(cin >> n){
		if(prime(n)){
			int idx = find(n);
			if(idx == -1){
				a[x].first = n;
				a[x].second = 1;
				++x;
			}
			else{
				++a[idx].second;
			}
		}
	}
	for(int i = 0; i < x; i++){
		cout << a[i].first << " " << a[i].second << endl;
	}
}
