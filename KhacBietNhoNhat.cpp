#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int cmp(const void* a, const void* b){
    int* x = (int*)a;
    int* y = (int*)b;
    if(*x < *y) return -1;
    return 1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    qsort(a, n, sizeof(int), cmp);
    int min = 1e9;
    for(int i = 0; i < n-1; i++){
        if(abs(a[i] - a[i+1]) < min){
            min = abs(a[i] - a[i+1]);
        }
    }
    cout << min;
}    
