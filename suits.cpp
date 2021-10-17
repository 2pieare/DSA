#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    ll a, b, c, d, e, f;
    cin >> a >> b >> c;
    cin >> d >> e >> f;

    ll m1 = min(a, d);
    ll ans1 = (m1*e) + min(b, min(c, d - m1)) * f;

    ll m2 = min(b, min(c, d));
    ll ans2 = (m2*f) + min(a, d-m2) * e;

    cout << max(ans1, ans2) << endl;
}