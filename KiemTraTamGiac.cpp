#include <iostream>

using namespace std;

int check1(int a, int b, int c){
	if((a == b) && (a == c)) return 1;
	return 0;
}

int check2(int a, int b, int c){
	if((a == b) || (a == c) || (b == c)) return 1;
	return 0;
}

int check3(int a, int b, int c){
	if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a)) return 1;
	return 0;
}

int check4(int a, int b, int c){
	if(((a + b) > c) && ((a + c) > b) && ((c + b) > a)) return 1;
	return 0;
}

int check5(int a, int b, int c){
	if(((a + b) <= c) || ((a + c) <= b) || ((c + b) <= a)) return 1;
	return 0;
}

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(check4(a,b,c)){
		if(check1(a,b,c)) cout << "1";
		else if(check2(a,b,c)) cout << "2";
		else if(check3(a,b,c)) cout << "3";
		else cout << "4";
	}
	else{
		cout << "INVALID";
	}
}
