#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int check1(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}

int check2(int n){
	int tmp = n, s = 0;
	while(n){
		s = 10 * s + n%10;
		n /= 10;
	}
	if(s == tmp) return 1;
	return 0;
}

int check3(int n){
	int x = sqrt(n);
	if(x * x == n) return 1;
	return 0;
}

int check4(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if(check1(sum)) return 1;
	return 0;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(int i = 0; i < n; i++){
        if(check1(a[i])) ++cnt1;
        if(check2(a[i])) ++cnt2;
        if(check3(a[i])) ++cnt3;
        if(check4(a[i])) ++cnt4;
    }	
    cout << cnt1 << endl << cnt2 << endl << cnt3 << endl << cnt4;
}
