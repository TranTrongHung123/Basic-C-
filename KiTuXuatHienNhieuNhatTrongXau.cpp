#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	map<char,int> mp;
	for(int i = 0; i < s.size(); i++){
		++mp[s[i]];
	}
	int min = 1e9, max = 0;
	for(auto x : mp){
		if(x.second > max){
			max = x.second;
		}
		if(x.second < min){
			min = x.second;
		}
	}
	vector<pair<char,int>> vt;
	for(auto x : mp){
		vt.push_back(x);
	}
	for(int i = vt.size()-1; i >= 0; i--){
		if(vt[i].second == max){
			cout << vt[i].first << " " << max;
			break;
		}
	}
	cout << endl;
	for(int i = vt.size()-1; i >= 0; i--){
		if(vt[i].second == min){
			cout << vt[i].first << " " << min;
			break;
		}
	}
}
