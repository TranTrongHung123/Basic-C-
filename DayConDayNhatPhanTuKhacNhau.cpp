#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<int,int> x[1000000];
int k = 0;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int b[n];
	b[0] = 1;
	for(int i = 1; i < n; i++){
		if(a[i] == a[i-1]){
			b[i] = 1;
		}
		else{
			b[i] = b[i-1] + 1;
		}
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		if(b[i] > max){
			max = b[i];
		}
	}
	for(int i = 0; i < n; i++){
		if(b[i] == max){
			x[k].first = i;
			int tmp = 0;
			for(int c = i; c > i - max; c--){
				tmp += a[c];
			}
			x[k].second = tmp;
			++k;
		}
	}	
	int max_val = -1;
	for(int i = 0; i < k; i++){
		if(x[i].second > max_val){
			max_val = x[i].second;
		}
	}
	for(int i = 0; i < k; i++){
		if(x[i].second == max_val){
			cout << max << "\n";
			for(int c = x[i].first-max+1; c <= x[i].first; c++){
				cout << a[c] << " ";
			}
			break;
		}
	}	
}
