#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	if(n == 1){
		cout << 0;
	}	
	else{
		int min = 1e9;
		for(int i = 0; i < n-1; i++){
			if((a[i+1] - a[i]) < min){
				min = (a[i+1] - a[i]);
			}
		}
		cout << min;
	}
}
