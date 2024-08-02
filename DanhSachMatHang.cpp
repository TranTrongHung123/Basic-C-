#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct MH{
	ll stt, ban, mua;
	string ten, dvi;
};

bool cmp(MH a, MH b){
	if((a.ban - a.mua) != (b.ban - b.mua)){
		return (a.ban - a.mua) > (b.ban - b.mua);
	}
	return a.stt < b.stt;
}

int main(){
	ll n;
	cin >> n;
	MH a[n];
	for(ll i = 0; i < n; i++){
		scanf("\n");
		a[i].stt = i+1;
		getline(cin, a[i].ten);
		getline(cin, a[i].dvi);
		scanf("%lld", &a[i].mua);
		scanf("%lld", &a[i].ban);
	}
	sort(a, a+n, cmp);
	for(int i = 0; i < n; i++){
		string x = to_string(a[i].stt);
		string tmp = "MH" + string(4 - x.size(), '0')+ x;
		cout << tmp << " " << a[i].ten << " " << a[i].dvi << " " << a[i].mua << " " << a[i].ban << " " << a[i].ban - a[i].mua  << endl;
	}	
}
