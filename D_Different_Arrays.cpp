#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <string.h>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;
#define MOD 998244353;

void helper(vector<ll> v, ll n, ll pos, set<vector<ll>> &ans)
{
    if (pos == n - 1)
    {
        ans.insert(v);
        return;
    }
    vector<ll> temp1, temp2;
    for (auto u : v)
    {
        temp1.push_back(u);
        temp2.push_back(u);
    }

    temp1[pos - 1] += temp1[pos];
    temp1[pos + 1] -= temp1[pos];
    temp2[pos - 1] -= temp2[pos];
    temp2[pos + 1] += temp2[pos];

    helper(temp1, n, pos + 1, ans);
    helper(temp2, n, pos + 1, ans);
    return;
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

        set<vector<ll>> s;
        helper(a, n, 1, s);
        ll ans = s.size();
        cout << ans << endl;
    }
    return 0;
}