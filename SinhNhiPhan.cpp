#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Sinh nhi phan => Sinh cac cau hinh nhi phan voi do dai N
// Y tuong cai dat ham sinh : Tim bit 0 dau tien tu vi tri cuoi cung
// Dua tren cach cong cau hinh dung truoc voi  bit 1

int n, a[100], ok;

// Khoi tao cau hinh ban dau 
void ktao(){
	// cau hinh ban dau la n bit 0
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
} 

// Ham sinh cau hinh ke tiep
void sinh(){
	// Tim bit 0 dau tien tinh tu cuoi
	int i = n; 
	while(i >= 1 && a[i] == 1){ 
		a[i] = 0;
		--i;
	}
	if(i == 0){ // Dieu kien dung khi xau sinh ra co n bit 1
		ok = false;
	}
	else{
		// Chi so i se la vi tri dau tien cua bit 0 => chuyen gia tri ve 1
		a[i] = 1;
	}
}

int main(){
	cin >> n;
	ktao();
	ok = true; 
	while(ok == true){ // Neu chua phai cau hinh cuoi cung thi van lap
		// In ra cau hinh dau tien
		for(int i = 1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		// Sinh ra cau hinh tiep theo
		sinh();
	}
}
