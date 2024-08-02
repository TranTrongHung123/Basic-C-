#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, k;
    cin >> a >> b >> k;
    if(k % 2 == 1){
        cout << (k/2 + 1)*a - (k/2)*b << endl;
    }
    else
        cout << (k/2)*a - (k/2)*b << endl;
        
    return 0;
}
