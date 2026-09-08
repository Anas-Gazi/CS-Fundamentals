#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> mp;
    int n;
    cin >> n;
        string s;
    for (int i = 0; i < n; i++) {

        cin >> s;

        if (mp.find(s) != mp.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        mp[s]++;
    }

    return 0;
}