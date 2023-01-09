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

    vector<ll> v(3);
    v[0] = 3;
    v[1] = 5;
    v[2] = 6;

    auto x = v.begin();
    auto y = lower_bound(v.begin(), v.end(), 4);
    cout << *y;

    return 0;
}