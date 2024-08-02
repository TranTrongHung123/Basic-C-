#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Sinh to hop (Dung de sinh ra cac tap con cua 1 day)
// Cau hinh ban dau la 1, 2, ... , k . Cau hinh cuoi n - k + 1, ... , n
// Y tuong cai dat ham sinh: Tim so dau tien chua max tu cuoi len
// B1 : Xet tu vi tri cuoi cua cau hinh ban dau va kiem tra xem no da lon nhat hay chua
// Note : Gia tri lon nhat co the dat dc o vi tri i : n - k + i
// B2 : Neu vi tri dang xet la so lon nhat roi thi dich sang trai de tim
// B3 : Khi tim duoc so dau tien chua max ta tang no len 1 don vi
// B4 : Duyet tat ca cai vi tri sau vi tri dau tien chua max va tinh cac gia tri day bang gia tri sau cong 1

int n, k, a[100], ok;

// Khoi tao cau hinh dau tien
void ktao(){
	// Cau hinh dau tien la 1, 2, ..., k;
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

//Sinh cac cau hinh tiep theo
void sinh(){
	int i = k; // Duyet tu cuoi cua cau hinh
	// Kiem tra neu vi tri dang xet da max roi thi dich trai
	while(i >= 1 && a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		ok = false; // Dieu kien dung cua cau hinh cuoi cung
	}
	else{
		++a[i]; // Tang vi tri chua max len 1 don vi
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main(){
	cin >> n >> k;
	ktao();
	ok = true;
	while(ok == true){
		// In ra cau hinh dau tien
		for(int i = 1; i <= k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		// Sinh ra cau hinh tiep theo
		sinh();
	}
}

