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
        long long c;
        cin >> n >> c;

        vector<long long> a;

        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;

            a.push_back(x + i);
        }

        sort(a.begin(), a.end());

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > c)
                break;

            c -= a[i];
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}