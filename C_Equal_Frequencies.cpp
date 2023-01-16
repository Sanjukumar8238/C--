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
        vector<ll> v;
        unordered_map<char, ll> mp;
        unordered_map<ll, ll> count;
        for (ll i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
    }
    return 0;
}