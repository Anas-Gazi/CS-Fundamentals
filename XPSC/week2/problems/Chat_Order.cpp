#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(find(v.begin(), v.end(), s) == v.end())
        {
            v.push_back(s);
        }
    }

    for(auto x : v)
    {
        cout << x << endl;
    }

    return 0;
}