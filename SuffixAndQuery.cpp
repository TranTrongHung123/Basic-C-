#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while(q--){
		int l;
		cin >> l;
		set<int> st;
		for(int i = l; i < n; i++){
			st.insert(a[i]);
		}
		cout << st.size() << endl;
	}
}
