#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SV{
    int msv;
    string ten, lop, sinh;
    double gpa;
};

string chuanhoa(string s){
    if(s[1] == '/'){
        s = "0" + s;
    }
    if(s[4] == '/'){
        s.insert(3, "0");
    }
    return s;
}

string chuanhoa1(int a){
    string s = to_string(a);
    string x = "SV" + string(3 - s.size(), '0') + s;
    return x;
}

string chuanhoa2(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			s.erase(i, 1);
			i = 0;
		}
	}
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

bool cmp(SV a, SV b){
	if(a.gpa != b.gpa){
		return a.gpa > b.gpa;
	}
	return a.msv < b.msv;
}

int main(){
    int n;
    cin >> n;
    SV a[n];
    for(int i = 0; i < n; i++){
    	scanf("\n");
        a[i].msv = i+1;
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        a[i].lop = chuanhoa2(a[i].lop);
        getline(cin, a[i].sinh);
        a[i].sinh = chuanhoa2(a[i].sinh);
        cin >> a[i].gpa;
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        cout << chuanhoa1(a[i].msv) << " ";
		in(a[i].ten); 
		cout << a[i].lop << " " << chuanhoa(a[i].sinh) << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
