#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[100][100], cot[100], cheo1[100], cheo2[100], X[100];
int res = 0, sum = 0;
int n = 8;

void Try(int i){
	for(int j = 1; j <= 8; j++){
		if(cot[j] == 0 && cheo1[i + j - 1] == 0 && cheo2[i - j + n] == 0){
			X[i] = j;
			sum += a[i][j];
			cot[j] = 1;
			cheo1[i + j - 1] = 1;
			cheo2[i - j + n] = 1;
			if(i == n){
				res = max(res, sum);
			}
			else{
				Try(i+1);
			}
			sum -= a[i][j];
			cot[j] = 0;
			cheo1[i + j - 1] = 0;
			cheo2[i - j + n] = 0;			
		}
	}
}

int main(){
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			cin >> a[i][j];
		}
	}
	Try(1);
	cout << res;
}