#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long mn = *min_element(a.begin(), a.end());

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == mn)
            {
                cnt++;
            }
        }

        if (cnt >= 2)
        {
            cout << "Yes\n";
            continue;
        }

        long long g = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != mn && a[i] % mn == 0)
            {
                g = gcd(g, a[i]);
            }
        }

        if (g == mn)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}

// https://codeforces.com/problemset/problem/2084/B