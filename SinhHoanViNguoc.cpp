#include <bits/stdc++.h>
using namespace std;

int n, a[1000];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        a[i] = n-i;
    }
    do{
        for(int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << "\n";
    }
    while(prev_permutation(a, a + n));
}
