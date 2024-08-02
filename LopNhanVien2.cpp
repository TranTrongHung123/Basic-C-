#include <bits/stdc++.h>
#define ll long long
using namespace std;

string chuanhoa(string s){
   if(s[1] == '/'){
       s = "0" + s;
   }
   if(s[4] == '/'){
       s.insert(3, "0");
   }
    return s;
}

void chuanhoa2(string s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}
	for(int i = 0; i < vt.size(); i++){
		vt[i][0] = toupper(vt[i][0]);
	}
	for(auto x : vt){
		cout << x << " ";
	}
}

struct NV{
    string ma = "00001";
    string ten, gtinh, ngay, dchi, mst, hdong;
    void input(){
        getline(cin, ten);
        getline(cin, gtinh);
        getline(cin, ngay);
        getline(cin, dchi);
        getline(cin, mst);
        getline(cin, hdong);
    }
    void output(){
        cout << ma << " ";
		chuanhoa2(ten);
		cout << gtinh << " " << chuanhoa(ngay) << " " << dchi << " " << mst << " " << chuanhoa(hdong);
    }
};

int main(){
    NV x;
    x.input();
    x.output();
}
