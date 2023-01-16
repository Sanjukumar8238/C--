#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <string.h>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;
#define MOD 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll w, d, h;
        cin >> w >> d >> h;
        ll a, b, f, g;
        cin >> a >> b >> f >> g;
        ll ans = h + abs(a - f);
        ll x = min(g + b, abs(d - g) + abs(d - b));
        ans += x;

        ll ans2 = h + abs(b - g);
        x = min(a + f, abs(w - a) + abs(w - f));
        ans2 += x;
        ans = min(ans2, ans);

        cout << ans << endl;
    }
    return 0;
}