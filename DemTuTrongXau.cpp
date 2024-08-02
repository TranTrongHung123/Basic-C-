#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string token;
	set<string> st;
	while(ss >> token){
		st.insert(token);
	}
	cout << st.size();
}	
