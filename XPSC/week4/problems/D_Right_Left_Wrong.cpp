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
            cin >> a[i];

        string s;
        cin >> s;

        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + a[i];

        int l = 0;
        int r = n - 1;
        long long ans = 0;

        while (l < r)
        {
            while (l < r && s[l] != 'L')
                l++;

            while (l < r && s[r] != 'R')
                r--;

            if (l >= r)
                break;

            ans += prefix[r + 1] - prefix[l];

            l++;
            r--;
        }

        cout << ans << endl;
    }

    return 0;
}