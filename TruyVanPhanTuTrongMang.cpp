#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	set<int> a;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a.insert(x);
	}
	int q;
	cin >> q;
	while(q--){
		int c;
		cin >> c;
		if(a.count(c) == 0){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
