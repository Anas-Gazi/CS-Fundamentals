#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int total_odds = 0;
        int t1 = -1;
        int t2 = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                total_odds++;
                if (t1 == -1)
                {
                    t1 = i;
                }
                t2 = i;
            }
        }

        if (total_odds % 2 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int opt1 = n - (t1 + 1);
            int opt2 = t2;
            cout << max(opt1, opt2) << endl;
        }
    }

    return 0;
}
