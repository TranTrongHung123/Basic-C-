#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	long long tong = a+b, hieu = a-b, tich = a*b;
	cout << tong << endl << hieu << endl << tich << endl;
	if(b == 0){
		cout << "INVALID" << endl;
	}
	else{
		double thuong = (double)a/b;
		cout << fixed << setprecision(4) << thuong << endl;
	}
}
