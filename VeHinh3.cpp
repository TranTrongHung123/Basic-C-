#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int cnt = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << cnt++ << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++){
		int tmp = i;
		for(int j = 1; j <= n; j++){
			cout << tmp++ << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++){
		int tmp = i;
		for(int j = 1; j <= n-i; j++){
			cout << "~";
		}
		for(int j = 1; j <= i; j++){
			cout << tmp;
		}
		cout << endl;
	}	
	cout << endl;
	for(int i = 1; i <= n; i++){
		int tmp = i;
		int x = n-1;
		int d = 0;
		for(int j = 1; j <= i; j++){
			if(d == 0){
				cout << tmp << " ";
				d = 1;
			}
			else{
				cout << tmp + x << " ";
				tmp = tmp + x;
				--x;
			}
		}
		cout << endl;
	}
}
