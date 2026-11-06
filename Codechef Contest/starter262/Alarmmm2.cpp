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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i = n - 1, cnt = 0;
        while (i >= 0)
        {
            if (s[i] == '1')
            {
                i -= k;
                cnt++;
            }
            i--;
        }
        cout << cnt << endl;
    }
    return 0;
}