#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]){
            return false;
        }
        ++l;
        --r;
    }
    return true;
}

bool cmp(string a, string b){
    return a.size() < b.size();
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token;
    vector<string> vt;
    map<string,int> mp;
    while(ss >> token){
        if(check(token) && mp[token] == 0){
            vt.push_back(token);
            ++mp[token];
        }
    }
    stable_sort(vt.begin(), vt.end(), cmp);
    for(auto x : vt){
        cout << x << " ";
    }
}
