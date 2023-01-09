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
        ll n, m;
        cin >> n >> m;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);

        unordered_map<ll, bool> vis;
        ll sum = 0;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (sum + b[i] <= m)
            {
                sum += b[i];
                cnt++;
                for (ll j = n - 1; j >= 0; j--)
                {
                    if (a[j] == b[i] && vis[j] == false)
                    {
                        vis[j] = true;
                        break;
                    }
                }
            }
            else
            {
                break;
            }
        }
        if (cnt == n)
        {
            cout << 1 << endl;
            continue;
        }
        ll ans;
        for (ll i = 1; i <= n; i++)
        {
            if (cnt == n - i)
            {
                if (vis[n - i] == true)
                {
                    ans = i;
                }
                else
                {
                    ans = i + 1;
                }
            }
        }
        if (cnt == 0)
        {
            ans = n + 1;
        }
        cout << ans << endl;
    }
    return 0;
}