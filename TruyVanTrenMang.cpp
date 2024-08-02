#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	multiset<int> ms;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		ms.insert(a[i]);
	}
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		if(a == 1){
			ms.insert(b);
		}
		else if(a == 2){
			if(ms.count(b) != 0){
				ms.erase(ms.find(b));
			}
		}
		else{
			if(ms.find(b) != ms.end()){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
	}
}
