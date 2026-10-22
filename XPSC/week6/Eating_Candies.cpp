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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = n - 1;
        int suml = 0, sumr = 0, cnt = 0;

        while (l <= r)
        {
            if (suml <= sumr)
            {
                suml += v[l];
                l++;
            }
            else
            {
                sumr += v[r];
                r--;
            }

            if (suml == sumr)
            {
                cnt = max(cnt, l + (n - 1 - r));
            }
        }

        cout << cnt << endl;
    }

    return 0;
}