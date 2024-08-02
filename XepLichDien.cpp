#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second < b.second;
}

int main(){
	int n;
	cin >> n;
	pair<int,int> pr[n];
	for(int i = 0; i < n; i++){
		cin >> pr[i].first >> pr[i].second;
	}
	sort(pr, pr+n, cmp);
	int cnt = 1, res = pr[0].second;
	for(int i = 1; i < n; i++){
		if(pr[i].first > res){
			++cnt;
			res = pr[i].second;
		}
	}
	cout << cnt;
}
