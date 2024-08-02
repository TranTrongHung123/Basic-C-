#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, s, ok = 0;
int a[1000], X[1000];
int sum = 0, d = 0, res = 1e9 + 1;

void Try(int i, int idx){
    for(int j = idx; j <= n; j++){
        X[i] = a[j];
        sum += X[i];
        ++d;
        if(sum == s){
            ok = 1;
            res = min(res,d);
        }
        else if(sum < s){
            Try(i + 1, j + 1);
        }
        sum -= X[i];
        --d;
    }
}

int main(){
    int t = 1;
    while(t--){
        cin >> n >> s;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        res = 1e9 + 1, ok = 0;
        Try(1,1);
        if(ok == 1){
            cout << res << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}