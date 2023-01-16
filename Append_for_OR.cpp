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
        ll n, y;
        cin >> n >> y;
        ll a[n];
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            x = x | a[i];
        }
        ll base = 1;
        ll ans = 0;
        ll flag = 0;
        for (ll i = 1; i <= 21; i++)
        {
            if (!(x & base))
            {
                if (y & base)
                {
                    ans += base;
                }
            }
            else if (x & base)
            {
                if (!(y & base))
                {
                    flag = -1;
                    break;
                }
            }

            base *= 2;
        }
        if (flag == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}