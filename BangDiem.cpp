#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct HS{
    int stt;
    string name, xeploai;
    double x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, gpa;
};

bool cmp(HS a, HS b){
    if(a.gpa != b.gpa){
        return a.gpa > b.gpa;
    }
    return a.stt < b.stt;
}

string chuanhoa(int n){
    string x = to_string(n);
    string s = "HS" + string(2 - x.size(), '0') + x;
    return s;
}

void in(string s){
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

int main(){
    int n;
    cin >> n;
    HS a[n];
    for(int i = 0; i < n; i++){
        a[i].stt = i+1;
        scanf("\n");
        getline(cin, a[i].name);
        cin >> a[i].x1 >> a[i].x2 >> a[i].x3 >> a[i].x4 >> a[i].x5 >> a[i].x6 >> a[i].x7 >> a[i].x8 >> a[i].x9 >> a[i].x10;
        a[i].gpa = (a[i].x1 + a[i].x2 + a[i].x3 + a[i].x4 + a[i].x5 + a[i].x6 + a[i].x7 + a[i].x8 + a[i].x9 + a[i].x10) / 10;
        if(a[i].gpa >= 9.0){
            a[i].xeploai = "XUAT SAC";
        }
        else if(a[i].gpa >= 8.0 && a[i].gpa <= 8.9){
            a[i].xeploai = "GIOI";
        }
        else if(a[i].gpa >= 7.0 && a[i].gpa <= 7.9){
            a[i].xeploai = "KHA";
        }
        else if(a[i].gpa >= 5.0 && a[i].gpa <= 6.9){
            a[i].xeploai = "TB";
        }
        else{
            a[i].xeploai = "YEU";
        }
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        cout << chuanhoa(a[i].stt) << " " ;
		in(a[i].name);
		cout << fixed << setprecision(1) << a[i].gpa << " " << a[i].xeploai << endl;
    }
}
