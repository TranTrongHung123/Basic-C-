#include <iostream>

using namespace std;

int main(){
	char c;
	cin >> c;
	if(c >= 'a' && c <= 'z'){
		if(c == 'z'){
			cout << "a";
		}
		else{
			char x = c + 1;
			cout << x;
		}
	}
	else{
		if(c == 'Z'){
			cout << "a";
		}
		else{
			char x = c + 33;
			cout << x;
		}		
	}
}
