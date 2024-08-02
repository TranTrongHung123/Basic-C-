#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	sort(s, s + n);
	int a[n];
	for(int i = 0; i < n; i++){
		a[i] = i;
	}
	do{
		for(int i = 0; i < n; i++){
			cout << s[a[i]] << " ";
		}
		cout << endl;
	}while(next_permutation(a, a + n));
}
