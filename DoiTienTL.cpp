#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int cnt = 0;
	for(int i = 9; i >= 0; i--){
		cnt += n / a[i];
		n %= a[i];
	}
	cout << cnt;
}
