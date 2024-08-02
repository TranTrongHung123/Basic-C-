#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct QL{
	string k, mk, ten, vao, ra;
	int tg;
};

bool cmp(QL a, QL b){
	if(a.tg != b.tg){
		return a.tg > b.tg;
	}
	return a.k < b.k;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	QL a[n];
	for(int i = 0; i < n; i++){
		getline(cin, a[i].k);
		getline(cin, a[i].mk);
		getline(cin, a[i].ten);
		getline(cin, a[i].vao);
		getline(cin, a[i].ra);
		a[i].tg = (stoi(a[i].ra.substr(3,2)) + 60 * stoi(a[i].ra.substr(0,2))) - (stoi(a[i].vao.substr(3,2)) + 60 * stoi(a[i].vao.substr(0,2)));
	}
	sort(a, a+n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i].k << " " << a[i].mk << " " << a[i].ten << " ";
		cout << a[i].tg / 60 << " gio " << a[i].tg % 60  << " phut"<< endl;
	}	
}
