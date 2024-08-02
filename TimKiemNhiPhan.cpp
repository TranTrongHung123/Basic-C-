#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
//	sort(a, a+n);
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		if(binary_search(a, a+n, x)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
