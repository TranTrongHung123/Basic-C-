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

string chuanhoa3(int n){
	string t = to_string(n);
	string x = string(5 - t.size(), '0') + t;
	return x;
}

struct NV{
    int ma;
    string ten, gtinh, ngay, dchi, mst, hdong;
};

bool cmp(NV a, NV b){
	if(a.ngay.substr(6, 4) != b.ngay.substr(6, 4)){
		return a.ngay.substr(6, 4) < b.ngay.substr(6, 4);
	}
	if(stoi(a.ngay.substr(3, 2)) != stoi(b.ngay.substr(3, 2))){
		return stoi(a.ngay.substr(3, 2)) < stoi(b.ngay.substr(3, 2));
	}
	if(stoi(a.ngay.substr(0, 2)) != stoi(b.ngay.substr(0, 2))){
		return stoi(a.ngay.substr(0, 2)) < stoi(b.ngay.substr(0, 2));
	}
	return a.ma < b.ma;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    NV a[n];
    for(int i = 0; i < n; i++){
    	a[i].ma = i+1;
    	getline(cin, a[i].ten);
    	getline(cin, a[i].gtinh);
    	getline(cin, a[i].ngay);
    	getline(cin, a[i].dchi);
    	getline(cin, a[i].mst);
    	getline(cin, a[i].hdong);
	}
	sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
		cout << chuanhoa3(a[i].ma) << " ";
		cout << a[i].ten << " ";
		cout << a[i].gtinh << " " << chuanhoa(a[i].ngay) << " " << a[i].dchi << " " << a[i].mst << " " << chuanhoa(a[i].hdong) << endl;
	}	
}
