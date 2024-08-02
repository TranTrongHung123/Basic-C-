#include <bits/stdc++.h>
using namespace std;

// Sinh hoan vi
// Cau hinh dau tien : 123..N,  cau hinh cuoi cung N(N-1)(N-2)...1

int n, a[1000], ok;

// Khoi tao cau hinh ban dau
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

// Sinh cac cau hinh tiep theo
void sinh(){
	// Bat dau tu chi so n-1
	int i = n-1;
	// Tim phan tu dau tien nho hon phan tu dung trc theo chieu tu duoi len
	// => Dieu kien la cu gap phan tu dung trc lon hon thi dich sang trai
	while(i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if(i == 0){
		ok = false; // Cau hinh cuoi cung
	}
	else{
		// Chi so i bay gio la phan tu can swap
		// Tim phan tu be nhat > a[i] de swap
		int j = n;
		// Vi can tim phan tu a[j] be nhat lon hon a[i] nen cu gap a[j] < a[i] thi dich 1bit
		while(a[i] > a[j]){
			--j;
		}
		swap(a[i], a[j]);
		// sap xep cai phan tu sau chi so i tang dan de dc cau hinh be nhat
		sort(a + i + 1, a + n + 1);
	}
}

int main(){
	cin >> n;
	ktao();
	ok = true;
	while(ok){
		for(int i = 1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
}
