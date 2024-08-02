#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	if((b*b == a*c && (c*c == b*d))){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
