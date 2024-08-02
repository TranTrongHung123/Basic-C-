#include <iostream>
#include <math.h>
#define ll long long

using namespace std;


ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            if(n == 1){
                return i;
            }
        }
    }
    return n;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << check(n) << endl;
    }
}
