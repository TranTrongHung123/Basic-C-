#include <bits/stdc++.h>
#define ll long long
using namespace std;


int find1(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			res = mid;
			r = mid - 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return res;
}

int find2(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			res = mid;
			l = mid + 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;			
		}
	}
	return res;
}

int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	int x1 = find1(a, 0, n-1, x);
	int x2 = find2(a, 0, n-1, x);
	auto it1 = lower_bound(a, a+n, x);
	auto it2 = upper_bound(a, a+n, x);
	cout << x1 << endl << x2 << endl;
	if(it1 == (a+n)){
		cout << -1 << endl;
	}
	else{
		cout << distance(a, it1) << endl;
	}
	if(it2 == (a+n)){
		cout << -1 << endl;
	}
	else{
		cout << distance(a, it2) << endl;
	}	
	if(x1 == -1){
		cout << 0;
	}
	else{
		cout << x2-x1+1;
	}
}
