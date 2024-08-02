#include <iostream>

using namespace std;

int main(){
	char c;
	cin >> c;
	if(c >= 'a' && c <= 'z'){
		char x = c - 32;
		cout << x;
	}
	else if(c >= 'A' && c <= 'Z'){
		char x = c + 32;
		cout << x;
	}
	else{
		cout << c;
	}
}
