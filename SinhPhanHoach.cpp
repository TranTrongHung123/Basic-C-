#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Sinh phan hoach : Sinh cac cau hinh tong bang n
// Y tuong : Tim so dau tien khac 1 tu cuoi len de phan tich ra lam cau hinh dai them
// Cau hinh dau tien : n, cai hinh cuoi cung : 1 1 1 ... (n so 1)


int n, a[10000], cnt, ok;

void ktao(){
	cnt = 1; // Cau hinh dau tien tong bang n chinh la n nen do dai bang 1
	a[1] = n;
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0){
		ok = false; // Cau hinh tat ca la so 1
	}
	else{
		--a[i]; // Giam vi tri dau tien khac 1 di 1 don vi
		int thieu = cnt - i + 1; // Phan con thieu la so luong so 1 da duyet qua cong 1 don vi vua giam o a[i]
		// Phan tich phan thieu de dien vao cac vi tri dang sau
		int x = thieu / a[i]; // So luong so a[i] can bieu dien o dang sau
		int y = thieu % a[i]; // So du can bieu dien cuoi cung
		cnt = i; // reset lai do dai cua day moi
		for(int j = 1; j <= x; j++){ // Dien x so a[i] vao i+1, i+2, ...
			a[++cnt] = a[i];
		}
		if(y != 0){ // Neu con phan du dien not vao sau
			a[++cnt] = y;
		}
	}
}

int main(){
	cin >> n;
	ktao();
	ok = true;
	while(ok){
		for(int i = 1; i <= cnt; i++){
			cout << a[i];
			if(i != cnt){
				cout << "+";
			}
		}
		cout << "\n";
		sinh();
	}
}
