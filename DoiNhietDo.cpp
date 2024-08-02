#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int t;
	cin >> t;
	double f = (1.0 * t * 9/5) + 1.0 * 32;
	cout << fixed << setprecision(2) << f;
}
