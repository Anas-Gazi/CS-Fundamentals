#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<string, string> mp;

    while(q--)
    {
        string old, nw;
        cin >> old >> nw;

        if(mp.find(old) == mp.end())
        {
            mp[nw] = old;
        }
        else
        {
            mp[nw] = mp[old];
            mp.erase(old);
        }
    }
    cout << mp.size() << '\n';

    for(auto x : mp)
    {
        cout << x.second << ' ' << x.first << '\n';
    }

    return 0;
}