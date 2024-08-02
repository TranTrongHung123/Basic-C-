#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int check(int a[], int n){
	int l = 0, r = n-1;
	while(l < r){
		if(a[l] != a[r]){
			return 0;
		}
		++l;
		--r;
	}
	return 1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
	if(check(a,n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
