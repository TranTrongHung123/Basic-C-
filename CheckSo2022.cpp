#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ok = 0;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if(x == 2022){
			ok = 1;
			break;
		}
	}
	if(ok == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
