#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	string res = "";
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '0' || s[i] == '1'){
			continue;
		}
		else if(s[i] == '4'){
			res += "223";
		}
		else if(s[i] == '6'){
			res += "35";
		}
		else if(s[i] == '8'){
			res += "2227";
		}
		else if(s[i] == '9'){
			res += "2337";
		}
		else{
			res += s[i];
		}
	}
	
	sort(res.begin(), res.end(), greater<char>());
	cout << res;
}
