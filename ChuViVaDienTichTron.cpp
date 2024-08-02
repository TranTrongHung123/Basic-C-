#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long long n;
	cin >> n;
	double C = (double)2 * 3.14 * n, S = (double)3.14 * n * n;
	cout << fixed << setprecision(4) << C << " " << fixed << setprecision(4) << S;
}
