#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.first < b.first;
}

int main(){
	int n, x;
	cin >> n >> x;
	pair<int,int> pr[n];
	for(int i = 0; i < n; i++){
		cin >> pr[i].first >> pr[i].second;
	}
	sort(pr, pr+n, cmp);
	int ok = 1;
	for(int i = 0; i < n; i++){
		if(x > pr[i].first){
			x += pr[i].second;
		}
		else{
			ok = 0;
			break;
		}
	}
	if(ok == 0){
		cout << "NO";
	}
	else{
		cout << "YES";
	}
}
