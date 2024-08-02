#include <iostream>

using namespace std;

int main(){
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double s = (a + b + 2*c + 3*d)/7;
	if(s >= 8){
		cout << "GIOI";
	}
	else if(s < 8 && s >= 6.5){
		cout << "KHA";
	}
	else if(s < 5){
		cout << "YEU";
	}
	else{
		cout << "TRUNG BINH";
	}
}
