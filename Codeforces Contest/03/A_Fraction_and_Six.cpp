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
        int n, m;
        cin >> n >> m;
        string p, q;
        cin >> p >> q;

        string xtra = "";
        map<char, bool> mp;
        mp['s'] == false;
        mp['i'] == false;
        mp['x'] == false;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(p[i]) != mp.end())
            {
                mp.erase(p[i]);
            }
            else
            {
                xtra += p[i];
            }
        }
        sort(xtra.begin(), xtra.end());
        sort(q.begin(), q.end());

        if (mp.empty() && xtra == q)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}