#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll x = max({a, b, c});
        if ((a + b + c + n) % 3 == 0 && ((n + a + b + c) / 3) >= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    return 0;
}
