#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, s, a[1000], mark[1000], X[1000];
int sum = 0, ok = 0;

void Try(int i, int idx){
	for(int j = idx; j <= n; j++){
		sum += a[j];
		X[i] = a[j];
		if(sum == s){
			ok = 1;
			cout << "[";
			for(int k = 1; k <= i; k++){
				cout << X[k];
				if(k != i){
					cout << " ";
				}
				else{
					cout << "]";
				}
			}
			cout << endl;
		}
		else{
			Try(i + 1, j + 1);
		}
		sum -= a[j];
	}
}

int main(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	Try(1, 1);
	if(ok == 0){
		cout << "-1";
	}
}