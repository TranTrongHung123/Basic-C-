#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> vt;
    ll tong = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            ll sum = 0;
            while(isdigit(s[i])){
                sum = 10*sum + (s[i] - '0');
                ++i;
            }
            tong += sum;
        }
    }
	cout << tong;
}
