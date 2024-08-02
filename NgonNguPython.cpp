#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	string tmp = "python";
	int x = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == tmp[x]){
			++x;
		}
	}
	if(x == 6){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
