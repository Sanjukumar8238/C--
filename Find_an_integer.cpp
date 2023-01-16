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
        ll x, y;
        cin >> x >> y;
        ll ans = (x - 1) * y - x;
        if (ans < 0)
        {
            ans = (y - 1) * x - y;
        }

        if (x == y)
        {
            cout << x << endl;
            continue;
        }
        if (x == 1)
        {
            cout << 2 * y - 1 << endl;
            continue;
        }

        if (y == 1)
        {
            cout << 2 * x - 1 << endl;
            continue;
        }

        cout << ans << endl;
    }
    return 0;
}