#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, a[100][100], cnt;

int dx[2] = {1,0};
int dy[2] = {0,1};

void Try(int i, int j){
    if(i == n && j == m){
        ++cnt;
    }
    for(int k = 0; k < 2; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];    
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 101){
            a[i1][j1] = 101;
            Try(i1,j1);
            a[i1][j1] = 1;
        }
    }
}

int main(){
    int t = 1;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        a[1][1] = 101;
        Try(1,1);
        cout << cnt << endl;
    }
}
