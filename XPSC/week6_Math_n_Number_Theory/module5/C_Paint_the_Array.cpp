#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        vector<long long int> v(n);

        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int g1 = 0, g2 = 0;

        for (long long int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, v[i]);
        }

        for (long long int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, v[i]);
        }

        long long ans = 0;
        bool ok = true;

        for (long long int i = 1; i < n; i += 2)
        {
            if (g1 != 0 && v[i] % g1 == 0)
            {
                ok = false;
            }
        }

        if (ok)
        {
            ans = g1;
        }
        else
        {
            ok = true;

            for (long long int i = 0; i < n; i += 2)
            {
                if (g2 != 0 && v[i] % g2 == 0)
                {
                    ok = false;
                }
            }

            if (ok)
            {
                ans = g2;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}