#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
	cout << s << endl;
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	cout << s << endl;
}
