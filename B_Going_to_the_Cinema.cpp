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
        ll n;
        cin >> n;
        ll a[n];
        unordered_map<ll, ll> mp;
        unordered_map<ll, bool> is;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            is[a[i]] = true;
            mp[a[i]]++;
        }
        sort(a, a + n);

        vector<ll> v(n + 1);
        for (ll i = 0; i < n; i++)
        {
            v[i] = mp[i];
            if (i > 0)
            {
                v[i] += v[i - 1];
            }
        }
        v[n] = n;

        // for (ll i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        ll ans = 0;
        for (ll i = 0; i <= n; i++)
        {
            if (i == v[i] && is[i] == false)
            {
                ans++;
                // cout << i << " ";
            }
        }
        // cout << endl;
        cout << ans << endl;
    }
    return 0;
}