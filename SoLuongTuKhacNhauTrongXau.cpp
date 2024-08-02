#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	set<string> st;
	while(cin >> s){
		st.insert(s);
	}
	cout << st.size() << "\n";
	cout << *st.begin() << " " << *st.rbegin();
}
