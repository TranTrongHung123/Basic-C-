#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<int,int> mp;

bool cmp1(int a, int b){
	if(mp[a] != mp[b]){
		return mp[a] > mp[b];
	}
	return a < b;
}

bool cmp2(int a, int b){
	return mp[a] > mp[b];
}

int main(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
		++mp[a[i]];
	}
	sort(a, a+n, cmp1);
	for(auto x : a){
		cout << x << ' ';
	}	
	cout << endl;
	stable_sort(b, b+n, cmp2);
	for(auto x : b){
		cout << x << ' ';
	}	
}
