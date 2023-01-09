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
        string s;
        cin >> s;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<ll>> v;
        vector<ll> temp;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                temp.push_back(a[i]);
            }
            else if (i == 0)
            {
                temp.push_back(a[i]);
            }
            else
            {
                v.push_back(temp);
                temp.clear();
                temp.push_back(a[i]);
            }
        }
        v.push_back(temp);
        ll ans = 0;

        if (s[0] == '0')
        {
            sort(v[0].begin(), v[0].end());
            for (ll i = 1; i < v[0].size(); i++)
            {
                ans += v[0][i];
            }
        }
        else
        {
            sort(v[0].begin(), v[0].end());
            for (ll i = 0; i < v[0].size(); i++)
            {
                ans += v[0][i];
            }
        }

        for (ll i = 1; i < v.size(); i++)
        {
            sort(v[i].begin(), v[i].end());
            for (ll j = 1; j < v[i].size(); j++)
            {
                ans += v[i][j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}