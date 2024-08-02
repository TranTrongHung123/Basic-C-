#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> vt;
    int len = s.size();
    for(int i = 0; i <=  len - 3; i++){
        if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '1'){
            vt.push_back(i);
            s[i] = '0';
            s[i+1] = '0';
            s[i+2] = '0';
        }
    }
    
    for(int j = 0; j < vt.size(); j++){
    	vt[j] -= 3*j;
        s.erase(vt[j], 3);
    }
    if(s.size() != 0){
        cout << s;
    }
    else{
        cout << "EMPTY";
    }
}
