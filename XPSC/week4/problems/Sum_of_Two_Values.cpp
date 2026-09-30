#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    map<long long, int> mp;

    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;

        long long y = x - a;

        if (mp.count(y)) {
            cout << mp[y] << " " << i << endl;
            return 0;
        }

        mp[a] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}