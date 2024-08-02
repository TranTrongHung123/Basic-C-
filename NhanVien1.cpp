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
    for(int i = 0; i < n; i++){
        cout << chuanhoa3(a[i].ma) << " ";
        cout << a[i].ten << " ";
        cout << a[i].gtinh << " " << chuanhoa(a[i].ngay) << " " << a[i].dchi << " " << a[i].mst << " " << chuanhoa(a[i].hdong) << endl;
    }    
}
