#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string token;
	map<string,int> mp;
	while(ss >> token){
		++mp[token];
	}
	vector<pair<string,int>> vt;
	int max = 0, min = 1e9;
	for(auto x : mp){
		if(x.second > max){
			max = x.second;
		}
		if(x.second < min){
			min = x.second;
		}		
	}	
	for(auto x : mp){
		vt.push_back(x);
	}
	for(int i = vt.size() - 1; i >= 0; i--){
		if(vt[i].second == max){
			cout << vt[i].first << " " << max << endl;
			break;
		}
	}
	for(int i = vt.size() - 1; i >= 0; i--){
		if(vt[i].second == min){
			cout << vt[i].first << " " << min << endl;
			break;
		}
	}
}
