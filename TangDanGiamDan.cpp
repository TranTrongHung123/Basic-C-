#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(int a, int b){
	return a < b;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for(int x : a){
		cout << x << " ";
	}
	cout << endl;
	for(int i = n-1; i >= 0; i--){
		cout << a[i] << " ";
	}	
}


