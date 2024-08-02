#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int m, s;
	cin >> m >> s;
	if((s > 9*m) || (s == 0 && m > 1)){
		cout << "NOT FOUND";
	}
	else{
		int a[m], b[m];
		int tmp = s;
		for(int i = 0; i < m; i++){
			if(s >= 9){
				a[i] = 9;
				s -= 9;
			}
			else{
				a[i] = s;
				s -= s;
			}
		}
		--tmp;
		for(int i = m-1; i >= 0; i--){
			if(tmp >= 9){
				b[i] = 9;
				tmp -= 9;
			}
			else{
				b[i] = tmp;
				tmp -= tmp;
			}
		}
		b[0] += 1;
		for(int i = 0; i < m; i++){
			cout << b[i];
		}		
		cout << endl;
		for(int i = 0; i < m; i++){
			cout << a[i];
		}		
	}
}
