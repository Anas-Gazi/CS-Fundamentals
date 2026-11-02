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
        int x, y, z;
        cin >> x >> y >> z;
        char ch;

        if (y >= z)
            ch = 'R';
        else if (z >= x)
            ch = 'S';
        else
            ch = 'P';

        string ans(x + y + z, ch);
        cout << ans << endl;
    }
    return 0;
}