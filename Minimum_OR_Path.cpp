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
const ll N = 5e5 + 10;
ll dp[N];
ll helper(vector<ll> a, ll pos, ll n)
{
    if (pos == n - 1)
    {
        return a[pos];
    }
    if (a[pos] == 0)
    {
        return INT_MAX;
    }
    if (dp[pos] != -1)
    {
        return dp[pos];
    }

    ll ans = INT_MAX;
    for (ll i = 1; i <= a[pos] && pos + i < n; i++)
    {

        ll temp;
        if (dp[pos + i] == -1)
        {
            temp = helper(a, pos + i, n);
        }
        else
        {
            temp = dp[pos + i];
        }
        ans = min(ans, temp);
    }
    return dp[pos] = (ans | a[pos]);
}

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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        memset(dp, -1, sizeof(dp));
        ll ans = helper(a, 0, n);
        if (ans == INT_MAX)
        {
            cout << -1 << endl;
            continue;
        }
        cout << ans << endl;
    }
    return 0;
}