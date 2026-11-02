#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            ans = (1ll * ans % MOD * i % MOD) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}