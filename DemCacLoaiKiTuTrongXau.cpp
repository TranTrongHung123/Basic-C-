#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int cnt_cc = 0, cnt_cs = 0, cnt_k = 0;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			++cnt_cs;
		}
		else if(isalpha(s[i])){
			++cnt_cc;
		}
		else{
			++cnt_k;
		}
	}
	cout << cnt_cc << " " << cnt_cs << " " << cnt_k;
}
