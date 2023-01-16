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
        ll n, x;
        cin >> n >> x;
        ll max_bits;
        if (floor(log2(n | x)) == ceil(log2(n | x)))
        {
            max_bits = log2(n | x);
        }
        else
        {
            max_bits = log2(n | x) + 1;
        }
        if (n < x)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n == x)
        {
            cout << n << endl;
            continue;
        }
        ll base = 1;
        ll ans = n;

        while (n > 0)
        {
            if (n % 2 == 1 && x % 2 == 0)
            {
                ans += base;
            }
            base *= 2;
            cout << n << endl;
            n /= 2;
            x /= 2;
        }

        cout << ans << endl;
    }
    return 0;
}