#include <bits/stdc++.h>

using namespace std;

int main(){
	double a;
	cin >> a;
	double tmp = a - 0.5;
	if(tmp - (int)a == 0){
		int x = floor(a);
		cout << x;
	}
	else{
		cout << round(a);
	}
}
