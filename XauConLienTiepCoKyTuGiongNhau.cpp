#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	cin >> s;
	int a[s.size()];
	a[0] = 1;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i-1]){
			a[i] = a[i-1] + 1;
		}
		else{
			a[i] = 1;
		}
	}
	int max = 0;
	for(int i = 0; i < s.size(); i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	vector<char> vt;
	for(int i = 0; i < s.size(); i++){
		if(a[i] == max){
			vt.push_back(s[i]);
		}
	}	
	sort(vt.begin(), vt.end());
	for(int i = 1; i <= max; i++){
		cout << vt[vt.size() - 1];
	}
}
