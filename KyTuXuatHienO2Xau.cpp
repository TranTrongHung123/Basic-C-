#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set<char> st;
    map<char,int> mp;
    for(int i = 0; i < s1.size(); i++){
        mp[s1[i]] = 1;
        st.insert(s1[i]);
    }
    for(int i = 0; i < s2.size(); i++){
        if(mp[s2[i]] == 1){
            mp[s2[i]] = 2;
        }
        st.insert(s2[i]);
    }    
    for(auto x : mp){
        if(x.second == 2){
            cout << x.first;
        }
    }
    cout << endl;
    for(auto x : st){
        cout << x;
    }
}
