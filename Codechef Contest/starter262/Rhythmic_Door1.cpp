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
        int cnt = 1, ans = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == s[i + 1])
            {
                cnt++;
                if (cnt == 3)
                {
                    ans++;
                    cnt = 0;
                }
            }
            else
            {
                cnt = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}