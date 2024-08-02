#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct GV{
	int mgv;
	string ten, mon;
};

string name(string s){
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}
	return vt[vt.size() - 1];
}

string chuanhoa(string s){
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}	
	string tmp = "";
	for(int i = 0; i < vt.size(); i++){
		tmp += toupper(vt[i][0]);
	}
	return tmp;
}

bool cmp(GV a, GV b){
	return name(a.ten) < name(b.ten);
}

int main(){
	int n;
	cin >> n;
	scanf("\n");
	GV a[n];
	for(int i = 0; i < n; i++){
		a[i].mgv = i+1;
		getline(cin, a[i].ten);
		getline(cin, a[i].mon);
	}
	stable_sort(a, a+n, cmp);
	for(int i = 0; i < n; i++){
		if(a[i].mgv <= 9){
			cout << "GV0" << a[i].mgv << " " << a[i].ten << " " << chuanhoa(a[i].mon) << endl;
		}
		else{
			cout << "GV" << a[i].mgv << " " << a[i].ten << " " << chuanhoa(a[i].mon) << endl;			
		}
	}	
}
