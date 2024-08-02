#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}	
	for(int i = n-1; i >= 0; i--){
		if(a[i] == min){
			cout << i << " ";
			break;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] == max){
			cout << i;
			break;
		}
	}	
}
