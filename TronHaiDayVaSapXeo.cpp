#include <bits/stdc++.h>

using namespace std;

int cmp1(const void* a, const void* b){
	int* x = (int*)a;
	int* y = (int*)b;
	if(*x < *y) return -1;
	return 1;
}

int cmp2(const void* a, const void* b){
	int* x = (int*)a;
	int* y = (int*)b;
	if(*x < *y) return 1;
	return -1;
}

int main(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}	
	qsort(a, n, sizeof(int), cmp1);
	qsort(b, n, sizeof(int), cmp2);
	int i = 0, j = 0;
	int d = 0;
	while(d < 2*n){
		if(d % 2 == 0){
			cout << a[i++] << " ";
		}
		else{
			cout << b[j++] << " ";
		}
		++d;
	}		
}
