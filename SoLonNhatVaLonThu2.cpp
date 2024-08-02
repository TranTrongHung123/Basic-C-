#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
	int max1 = INT_MIN;
	int idx;
	for(int i = 0; i < n; i++){
		if(a[i] >= max1){
			max1 = a[i];
			idx = i;
		}
	}
	int max2 = INT_MIN;
	for(int i = 0; i < n; i++){
		if(a[i] >= max2 && i != idx){
			max2 = a[i];
		}
	}
	cout << max1 << " " << max2;
}
