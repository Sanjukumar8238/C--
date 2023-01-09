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

        ll a = 1, b = n * n;
        vector<ll> v;
        while (a < b)
        {
            v.push_back(a);
            v.push_back(b);
            a += 1;
            b -= 1;
        }
        if (n % 2 == 1)
        {
            v.push_back((n * n + 1) / 2);
        }

        ll x[n][n] = {0};
        ll flag = 0;
        ll k = 0;
        for (ll i = 0; i < n; i++)
        {
            if (flag == 0)
            {
                flag = 1;
                for (ll j = 0; j < n; j++)
                {
                    x[i][j] = v[k];
                    k++;
                }
            }
            else
            {
                for (ll j = n - 1; j >= 0; j--)
                {
                    x[i][j] = v[k];
                    k++;
                }
                flag = 0;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout << x[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}