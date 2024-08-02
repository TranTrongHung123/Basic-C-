#include <bits/stdc++.h>
#define ll long long
using namespace std;

int giao[10000001];
int hop[100000001];

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        hop[a[i]] = 1;
        giao[a[i]] = 1;
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
      	hop[b[i]] = 1;
      	if(giao[b[i]] == 1){
      		giao[b[i]] = 2;
		  }
    }    
    for(int i = 0; i <= 10000000; i++){
    	if(giao[i] == 2){
    		cout << i << " ";
		}
	}
	cout << "\n";
    for(int i = 0; i <= 10000000; i++){
    	if(hop[i] != 0){
    		cout << i << " ";
		}
	}	
}
