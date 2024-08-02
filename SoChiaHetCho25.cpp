#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s){
	if(s.size() == 1 && s[0] != '0'){
		return false;
	}
	if((s.size() == 1 && s[0] == '0')){
		return true;
	}
    int tmp = 10 * (s[s.size() - 2] - '0') + (s[s.size() - 1] - '0');
    if(tmp % 25 == 0){
        return true;
    }
    return false;
}

int main(){
    string s;
    getline(cin, s);
    if(check(s)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
