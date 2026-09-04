#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> v;

    // 1. Read all data first
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        vector<int> a(m);
        for (int j = 0; j < m; j++) {
            cin >> a[j];
        }
        v.push_back(a);
    }

    // 2. Print everything after reading is complete
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}