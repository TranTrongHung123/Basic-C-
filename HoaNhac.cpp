#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	multiset<int> ms;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		ms.insert(a[i]);
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}	
	for(int i = 0; i < m; i++){
		auto it = ms.upper_bound(b[i]);
		if(it != ms.begin()){
			--it;
			cout << *it << endl;
			ms.erase(it);
		}
		else{
			cout << -1 << endl;
		}
	}	
}

