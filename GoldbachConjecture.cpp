#include <bits/stdc++.h>

using namespace std;

int f[1000000];

void sang(){
    for(int i = 0; i <= 1000000; i++){
        f[i] = 1;
    }
    f[0] = 0;
    f[1] = 0;
    for(int i = 2; i <= 1000; i++){
        for(int j = i*i; j <= 1000000; j += i){
            f[j] = 0;
        }
    }
}

int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 2; i <= n/2; i++){
			if(f[i] == 1 && f[n-i] == 1){
				cout << i << " " << n-i << endl;
			}
		}
	}
}
