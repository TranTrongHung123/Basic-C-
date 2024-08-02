#include <iostream>
#include <math.h>
using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}

int check1(int n){
	if(n % 2 == 0) return 1;
	return 0;
}

int check2(int n){
	if((n % 3 == 0) && (n % 5 == 0)) return 1;
	return 0;
}

int check3(int n){
	if((n % 3 == 0) && (n % 7 != 0)) return 1;
	return 0;	
}

int check4(int n){
	if((n % 3 == 0) || (n % 7 == 0)) return 1;
	return 0;	
}

int check5(int n){
	if((n > 30) && (n < 50)) return 1;
	return 0;
}

int check6(int n){
	if((n >= 30) && ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))) return 1;
	return 0;
}

int check7(int n){
	if(n < 10 || n > 99) return 0;
	int d = 0;
	while(n){
		int t = n%10;
		if(prime(t) == 0) return 0;
		++d;
		if(d == 1) break;
		n /= 10;
	}
	return 1;
}

int check8(int n){
	if((n <= 100) && (n % 23 == 0)) return 1;
	return 0;
}

int check9(int n){
	if((n < 10) || (n > 20)) return 1;
	return 0;
}

int check10(int n){
	while(n){
		int t = n%10;
		if(t % 3 != 0) return 0;
		break;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	if(check1(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check2(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check3(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check4(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check5(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check6(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check7(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check8(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check9(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	if(check10(n)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
}
