#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> vt;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(x == 0){
			++cnt;
		}
		else{
			vt.push_back(x);
		}
	}
	for(auto x : vt){
		cout << x << " ";
	}
	for(int i = 1; i <= cnt; i++){
		cout << 0 << " ";
	}
}
