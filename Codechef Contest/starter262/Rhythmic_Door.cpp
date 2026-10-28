#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && s[i] == s[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            if (cnt == 3)
            {
                ans++;
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}