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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int init = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                init++;
        }

        int pos = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] == -1)
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
        {
            int ok = 0;
            for (int i = pos + 1; i < n; ++i)
            {
                if (a[i] - a[i - 1] == 1)
                {
                    ok = 1;
                    break;
                }
            }
            if (ok == 1)
            {
                cout << init + 2 << endl;
                continue;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] == 1 || a[i] - a[i - 1] == -1)
            {
                init++;
                break;
            }
        }
        cout << init << endl;
    }
    return 0;
}