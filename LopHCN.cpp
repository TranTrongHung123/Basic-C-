#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct HCN{
	ll d, r;
	string color;
};

string chuanhoa(string s){
	for(int i = 0; i < s.size(); i++){
		if(i == 0){
			s[i] = toupper(s[i]);
		}
		else{
			s[i] = tolower(s[i]);
		}
	}
	return s;
}

void nhap(HCN &a){
	cin >> a.d >> a.r;
	cin.ignore();
	getline(cin, a.color);
}

void xuat(HCN a){
	int cnt = 0;
	for(int i = 0; i < a.color.size(); i++){
		if(a.color[i] == ' '){
			++cnt;
			break;
		}
	}
	if(a.d < 0 || a.r < 0 || cnt != 0){
		cout << "INVALID";
		return;
	}
	ll cv = 2*(a.d + a.r);
	ll s = a.d * a.r;
	cout << cv << " " << s << " " << chuanhoa(a.color);
}

int main(){
	HCN x;
	nhap(x);
	xuat(x);
}
