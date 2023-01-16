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

// bool isValid(ll x, ll y, ll n, ll m)
// {
//     if (x < n && y < m)
//     {
//         return true;
//     }
//     return false;
// }

// ll helper(map<pair<ll, ll>, bool> mp, ll x, ll y, ll n, ll m, vector<vector<ll>> move, vector<vector<ll>> smove)
// {
//     if (x == n - 1 && y == m - 1)
//     {
//         return 0;
//     }
//     ll ans = INT_MAX;
//     if (mp[{x, y}])
//     {
//         for (auto u : smove)
//         {
//             ll tempx = x + u[0];
//             ll tempy = y + u[1];
//             if (isValid(tempx, tempy, n, m))
//             {
//                 ll temp = helper(mp, tempx, tempy, n, m, move, smove) + 1;
//                 ans = min(ans, temp);
//             }
//         }
//     }
//     else
//     {
//         for (auto u : move)
//         {
//             ll tempx = x + u[0];
//             ll tempy = y + u[1];
//             if (isValid(tempx, tempy, n, m))
//             {
//                 ll temp = helper(mp, tempx, tempy, n, m, move, smove) + 1;
//                 ans = min(ans, temp);
//             }
//         }
//     }
//     return ans;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<pair<ll, ll>> a;
        vector<pair<ll, ll>> b;

        for (ll i = 0; i < k; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (x == n - 1 || y == m - 1)
            {
                continue;
            }
            a.push_back({x, y});
        }
        sort(a.begin(), a.end());
    }
    return 0;
}