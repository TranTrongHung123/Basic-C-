#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char,int> giao;
    sort(s2.begin(), s2.end());
    for(int i = 0; i < s1.size(); i++){
        giao[s1[i]] = 1;
    }
    for(int i = 0; i < s2.size(); i++){
        if(giao[s2[i]] == 1){
            giao[s2[i]] = 2;
        }
    }      	 
    for(auto x : giao){
    	if(x.second == 1){
    		cout << x.first;
		}
	}
	cout << endl;
	for(int i = 0; i < s2.size(); i++){
		if(giao[s2[i]] != 2 && giao[s2[i]] != -1){
			cout << s2[i];
			giao[s2[i]] = -1;
		}
	}
}

