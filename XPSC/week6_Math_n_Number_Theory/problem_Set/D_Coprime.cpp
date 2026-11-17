
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

        vector<int> pos(1001, -1);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            pos[x] = i;
        }

        int ans = -1;

        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (pos[i] != -1 && pos[j] != -1)
                {
                    if (__gcd(i, j) == 1)
                    {
                        ans = max(ans, pos[i] + pos[j]);
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
