
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

        int a[4];

        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }

        int x = a[0];

        for (int i = 0; i < 4; i++)
        {
            if (a[i] > x)
                x = a[i];
        }

        cout << x << endl;
    }

    return 0;
}
