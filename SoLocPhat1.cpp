#include <bits/stdc++.h>
#define ll long long
#define endl "\n";
using namespace std;

vector<string> vt;

void solve(){
	queue<string> q;
	vt.push_back("6");
	vt.push_back("8");	
	q.push("6");
	q.push("8");	
	while(!q.empty() && q.front().size() <= 18){
		string t1 = q.front() + "6";
		string t2 = q.front() + "8";
		q.pop();
		q.push(t1);
		q.push(t2);
		vt.push_back(t1);	
		vt.push_back(t2);	
	}
}

int main(){
	solve();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = vt.size() - 1; i >= 0; i--){
			if(vt[i].size() <= n){
				cout << vt[i] << " ";
			}
		}
		cout << endl;
	}
}