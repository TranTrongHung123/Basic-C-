#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	int cnt = 0, cntc = 0, cntl = 0;
	while(cin >> n){
		++cnt;
		if(n % 2 == 0){
			++cntc;
		}
		else{
			++cntl;
		}
	}
	if((cnt % 2 == 0 && cntc > cntl) || (cnt % 2 != 0 && cntl > cntc)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
