#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Duong cheo1 theo chieu xuoi : i - j + n
// Duong cheo2 theo chieu nguoc : i + j - 1

int n, X[1000], cot[1000], cheo1[1000], cheo2[1000];
int cnt = 0; // Dem so cach

void backtrack(int i){ // Chi so i la so hang de dat con hau
	for(int j = 1; j <= n; j++){
		// Kiem tra vi tri chua bi con hau khac an
		if(cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0){
			// Dat con hau hang i o cot j
			X[i] = j;
			// Danh dau cac vi tri con hau sau ko dc dat
			cot[j] = 1;
			cheo1[i - j + n] = 1;
			cheo2[i + j - 1] = 1;
			if(i == n){ // Khi xep du vao cac vi tri thi tang so cach xep
				++cnt;
			}
			else{
				backtrack(i+1);
			}
			// Backtrack lai cau hinh
			cot[j] = 0;
			cheo1[i - j + n] = 0;
			cheo2[i + j - 1] = 0;			
		}
	}
}

int main(){
	cin >> n;
	backtrack(1);
	cout << cnt;
}