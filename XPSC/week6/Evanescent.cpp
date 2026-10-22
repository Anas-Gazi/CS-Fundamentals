
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
        string s;
        cin >> n >> s;

        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                ans++;
            }
        }

        int remove = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
            {
                if (s[i - 1] == s[i + 1])
                {
                    remove = 2;
                }
                else
                {
                    remove = max(remove, 1);
                }
            }
        }

        cout << ans - remove << '\n';
    }

    return 0;
}
