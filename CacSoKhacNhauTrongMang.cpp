#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	set<int> st;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		st.insert(x);
	}
	cout << st.size();
}
