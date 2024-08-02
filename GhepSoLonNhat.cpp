#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string a, string b){
	string ab = a+b;
	string ba = b+a;
	return ab > ba;
}

int main(){
	string s;
	cin >> s;
	vector<string> vt;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			string sum;
			while(isdigit(s[i])){
				sum += s[i];
				++i;
			}
			int cnt = 0;
			for(int j = 0; j < sum.size(); j++){
				if(sum[j] == '0' && j != sum.size()-1){
					++cnt;
				}
				else{
					break;
				}
			}
			sum.erase(0, cnt);
			vt.push_back(sum);
		}
	}
	sort(vt.begin(), vt.end(), cmp);
	for(auto x : vt){
		cout << x;
	}
}
