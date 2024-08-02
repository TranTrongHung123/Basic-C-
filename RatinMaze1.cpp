#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[100][100], ok = false;
string s = "";
int dx[2] = {1, 0};
int dy[2] = {0, 1};
string pot = "DR";

void Try(int i, int j){
	if(i == n && j == n){
		cout << s << "\n";
		ok = true;
	}
	for(int k = 0; k < 2; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
			s += pot[k];
			a[i1][j1] = 0;
			Try(i1,j1);
			a[i1][j1] = 1;
			s.pop_back();
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	Try(1,1);
	if(ok == false){
		cout << "-1";
		return 0;
	}
}
