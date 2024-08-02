#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        ll sum = 0;
        for(int j = 0; j < m; j++){
            sum += 1ll * a[i][j];
        }
        cout << sum << ' ';
    }
    cout << endl;
    for(int j = 0; j < m; j++){
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += 1ll * a[i][j];
        }
        cout << sum << ' ';
    }    
}
