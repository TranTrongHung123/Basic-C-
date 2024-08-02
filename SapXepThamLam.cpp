#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	int ok = 1;
	for(int i = 0; i < n; i++){
		if(b[i] != a[i] && b[i] != a[n-1-i]){
			ok = 0;
			break;
		}
	}
	if(ok){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}