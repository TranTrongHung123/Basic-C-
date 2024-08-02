#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct TD{
    double x, y;
};

void nhap(TD &a, TD &b, TD &c){
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
}

double change(TD a, TD b){
    double h = (a.x - b.x) * (a.x - b.x);
    double k = (a.y - b.y) * (a.y - b.y);
    return sqrt(h + k);
}

void xuat(TD a, TD b, TD c){
    double AB = change(a,b);
    double BC = change(c,b);
    double AC = change(a,c);
    if((AB + AC <= BC) || (AB + BC <= AC) || (BC + AC <= AB) || AB <= 0 || AC <= 0 || BC <= 0){
        cout << "INVALID" << endl;
        return;
    }
    double p = (AB+AC+BC)/2;
    double s = sqrt(p*(p-AB)*(p-AC)*(p-BC));
    double r = (AB * BC * AC)/ (4 * s);
    cout << fixed << setprecision(3) << 3.14 * r * r << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        TD a, b, c;
        nhap(a,b,c);
        xuat(a,b,c);
    }
}
