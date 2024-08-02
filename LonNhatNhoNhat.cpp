#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ms.insert(a[i]);
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(x == 1){
            int k;
            cin >> k;
            ms.insert(k);
        }
        else if(x == 2){
            int h;
            cin >> h;
            if(ms.count(h) != 0){
                ms.erase(h);
            }
        }
        else if(x == 3){
            cout << *ms.begin() << endl;
        }
        else{
            cout << *ms.rbegin() << endl;
        }
    }
}
