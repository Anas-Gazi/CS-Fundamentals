#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 1; i * i <= t; i++)
    {
        if (t % i == 0)
        {
            v.push_back(i);
            if (t / i != i)
                v.push_back(t / i);
        }
    }

    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}