#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	long long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double s = 1.0*sqrt(1.0*pow(x1-x2,2) + 1.0*pow(y1-y2,2));
	cout << fixed << setprecision(2) << s;
}
