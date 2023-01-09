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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        if (a[0] == a[n - 1])
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == a[0])
            {
                count++;
            }
        }
        cout << a[0] << " ";
        for (ll i = count; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (ll i = 0; i < count - 1; i++)
        {
            cout << a[0] << " ";
        }
        cout << endl;
    }
    return 0;
}