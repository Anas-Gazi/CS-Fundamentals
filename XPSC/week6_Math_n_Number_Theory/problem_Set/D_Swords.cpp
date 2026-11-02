#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long mx = *max_element(a.begin(), a.end());

    long long g = 0;

    for (int i = 0; i < n; i++)
    {
        g = gcd(g, mx - a[i]);
    }

    long long y = 0;

    for (int i = 0; i < n; i++)
    {
        y += (mx - a[i]) / g;
    }

    cout << y << " " << g << '\n';

    return 0;
}
// https://codeforces.com/problemset/problem/1216/D