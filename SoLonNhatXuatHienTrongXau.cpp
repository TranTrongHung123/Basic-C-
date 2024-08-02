#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string a, string b){
	if(a.size() != b.size()){
		return a.size() < b.size();
	}
	return a < b;
}

int main(){
	string s;
	cin >> s;
	vector<string> vt;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			string sum;
			//Lay ra so trong xau
			while(isdigit(s[i])){
				sum += s[i];
				++i;
			}
			//Xoa cac so 0 thua
			int cnt = 0;
			for(int j = 0; j < sum.size(); j++){
				if(sum[j] == '0' && j != sum.size() - 1){ // Dem so luong so 0 dang truoc co the xoa
					++cnt;
				}
				else{
					break;
				}
			}
			sum.erase(0, cnt); // erase string => s.erase(Chi so bat dau xoa, so phan tu xoa)
			vt.push_back(sum);
		}
	}
	sort(vt.begin(), vt.end(), cmp);
	cout << vt[vt.size() - 1];
}
